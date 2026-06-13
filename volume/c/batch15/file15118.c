// fichero 15118 -- macros y constantes
#define LIMITE_15118 15218
#define FACTOR_15118 4

int aplicar_limite15118(int valor) {
    if (valor > LIMITE_15118) return LIMITE_15118;
    return valor * FACTOR_15118;
}
