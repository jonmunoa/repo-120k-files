// fichero 3534 -- macros y constantes
#define LIMITE_3534 3634
#define FACTOR_3534 5

int aplicar_limite3534(int valor) {
    if (valor > LIMITE_3534) return LIMITE_3534;
    return valor * FACTOR_3534;
}
