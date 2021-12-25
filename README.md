# COMMANDS
```
docker build buildenv -t myos-buildenv

docker run --rm -it -v "%cd%":/root/env goldos

make build-x86_64

qemu-system-x86_64 -cdrom ./dist/x86_64/kernel.iso
```
# CODE

### FizzBuzz
```
void kernel_main()
{
  print_clear();
  print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
  for (int i = 1; i <= 20; i++)
  {
    char buf[100];
    if (i % 3 == 0)
    {
      print_str("Fizz");
    }
    if (i % 5 == 0)
    {
      print_str("Buzz");
    }

    if (i % 5 != 0 && i % 3 != 0)
    {
      print_str(itoa_simple(buf, i));
    }
    print_newline();
  }

}
```

### Interupts (someday)