// fichero 41486 -- macros y constantes
#define LIMITE_41486 41586
#define FACTOR_41486 2

int aplicar_limite41486(int valor) {
    if (valor > LIMITE_41486) return LIMITE_41486;
    return valor * FACTOR_41486;
}
