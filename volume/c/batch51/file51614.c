// fichero 51614 -- macros y constantes
#define LIMITE_51614 51714
#define FACTOR_51614 5

int aplicar_limite51614(int valor) {
    if (valor > LIMITE_51614) return LIMITE_51614;
    return valor * FACTOR_51614;
}
