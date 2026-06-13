// fichero 51254 -- macros y constantes
#define LIMITE_51254 51354
#define FACTOR_51254 5

int aplicar_limite51254(int valor) {
    if (valor > LIMITE_51254) return LIMITE_51254;
    return valor * FACTOR_51254;
}
