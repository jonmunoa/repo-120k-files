// fichero 51938 -- macros y constantes
#define LIMITE_51938 52038
#define FACTOR_51938 4

int aplicar_limite51938(int valor) {
    if (valor > LIMITE_51938) return LIMITE_51938;
    return valor * FACTOR_51938;
}
