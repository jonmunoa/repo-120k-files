// fichero 27242 -- macros y constantes
#define LIMITE_27242 27342
#define FACTOR_27242 3

int aplicar_limite27242(int valor) {
    if (valor > LIMITE_27242) return LIMITE_27242;
    return valor * FACTOR_27242;
}
