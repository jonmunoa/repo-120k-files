// fichero 27242 -- macros y constantes -- MODIFICADO
#define LIMITE_27242 27442
#define FACTOR_27242 4

int aplicar_limite27242(int valor) {
    if (valor > LIMITE_27242) return LIMITE_27242;
    return valor * FACTOR_27242;
}
