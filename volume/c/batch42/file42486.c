// fichero 42486 -- macros y constantes
#define LIMITE_42486 42586
#define FACTOR_42486 2

int aplicar_limite42486(int valor) {
    if (valor > LIMITE_42486) return LIMITE_42486;
    return valor * FACTOR_42486;
}
