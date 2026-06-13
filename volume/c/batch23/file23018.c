// fichero 23018 -- macros y constantes
#define LIMITE_23018 23118
#define FACTOR_23018 4

int aplicar_limite23018(int valor) {
    if (valor > LIMITE_23018) return LIMITE_23018;
    return valor * FACTOR_23018;
}
