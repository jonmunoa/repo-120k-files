// fichero 40486 -- macros y constantes
#define LIMITE_40486 40586
#define FACTOR_40486 2

int aplicar_limite40486(int valor) {
    if (valor > LIMITE_40486) return LIMITE_40486;
    return valor * FACTOR_40486;
}
