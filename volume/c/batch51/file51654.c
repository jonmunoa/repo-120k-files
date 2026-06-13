// fichero 51654 -- macros y constantes
#define LIMITE_51654 51754
#define FACTOR_51654 5

int aplicar_limite51654(int valor) {
    if (valor > LIMITE_51654) return LIMITE_51654;
    return valor * FACTOR_51654;
}
