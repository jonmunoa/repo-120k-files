// fichero 8118 -- macros y constantes
#define LIMITE_8118 8218
#define FACTOR_8118 4

int aplicar_limite8118(int valor) {
    if (valor > LIMITE_8118) return LIMITE_8118;
    return valor * FACTOR_8118;
}
