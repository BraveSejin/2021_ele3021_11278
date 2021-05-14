make clean;make CPUS=1 SCHED_POLICY=MLFQ_SCHED;make fs.img;
qemu-system-i386 -nographic -serial mon:stdio -hdb fs.img xv6.img -smp 1 -m 512

