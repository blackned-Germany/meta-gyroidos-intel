MACHINE = "qemux86-64"

DISTRO = "core-ref"

PACKAGE_CLASSES = "package_deb"

TMPDIR = "${TOPDIR}/tmp_container"

EXTRA_IMAGE_FEATURES:append = " debug-tweaks"

USER_CLASSES ?= "buildstats"

PATCHRESOLVE = "noop"

PACKAGECONFIG:append:pn-qemu-native = " sdl"
PACKAGECONFIG:append:pn-nativesdk-qemu = " sdl"

CONF_VERSION = "2"

PREFERRED_PROVIDER_virtual/kernel = "linux-dummy"
PREFERRED_PROVIDER_virtual/kernel:gyroidos-core = "linux-dummy"
PREFERRED_PROVIDER_virtual/kernel:linuxstdbase = "linux-dummy"

IMAGE_FSTYPES = "cpio.gz ext4"
INITRAMFS_IMAGE = ""

GYROIDOS_HARDWARE = "x86"

# Possible provider: cacao-initial-native and jamvm-initial-native
PREFERRED_PROVIDER_virtual/java-initial-native = "cacao-initial-native"

# Possible provider: cacao-native and jamvm-native
PREFERRED_PROVIDER_virtual/java-native = "cacao-native"

# Optional since there is only one provider for now
PREFERRED_PROVIDER_virtual/javac-native = "ecj-bootstrap-native"
#LICENSE_FLAGS_WHITELIST += "oracle_java"
