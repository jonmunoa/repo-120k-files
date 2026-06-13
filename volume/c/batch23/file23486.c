// fichero 23486 -- macros y constantes
#define LIMITE_23486 23586
#define FACTOR_23486 2

int aplicar_limite23486(int valor) {
    if (valor > LIMITE_23486) return LIMITE_23486;
    return valor * FACTOR_23486;
}
