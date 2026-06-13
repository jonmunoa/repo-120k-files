// fichero 43534 -- macros y constantes
#define LIMITE_43534 43634
#define FACTOR_43534 5

int aplicar_limite43534(int valor) {
    if (valor > LIMITE_43534) return LIMITE_43534;
    return valor * FACTOR_43534;
}
