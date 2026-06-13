// fichero 50486 -- macros y constantes
#define LIMITE_50486 50586
#define FACTOR_50486 2

int aplicar_limite50486(int valor) {
    if (valor > LIMITE_50486) return LIMITE_50486;
    return valor * FACTOR_50486;
}
