// fichero 51530 -- macros y constantes
#define LIMITE_51530 51630
#define FACTOR_51530 1

int aplicar_limite51530(int valor) {
    if (valor > LIMITE_51530) return LIMITE_51530;
    return valor * FACTOR_51530;
}
