// fichero 27142 -- macros y constantes
#define LIMITE_27142 27242
#define FACTOR_27142 3

int aplicar_limite27142(int valor) {
    if (valor > LIMITE_27142) return LIMITE_27142;
    return valor * FACTOR_27142;
}
