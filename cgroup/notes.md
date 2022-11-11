Youtube tutorial : https://www.youtube.com/watch?v=z7mgaWqiV90&t=383s

The cgroup hierarchy is manifest as a mounted file system that gets mounted someplace in the system's directory structure
    - typically in /sys/fs/cgroup but it can be mounted elsewhere with:
        # mount -t cgroup2 none $MOUNT_POINT



