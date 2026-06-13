// fichero 51354 -- macros y constantes
#define LIMITE_51354 51454
#define FACTOR_51354 5

int aplicar_limite51354(int valor) {
    if (valor > LIMITE_51354) return LIMITE_51354;
    return valor * FACTOR_51354;
}
