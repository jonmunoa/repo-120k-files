// fichero 21046 -- macros y constantes
#define LIMITE_21046 21146
#define FACTOR_21046 2

int aplicar_limite21046(int valor) {
    if (valor > LIMITE_21046) return LIMITE_21046;
    return valor * FACTOR_21046;
}
