// fichero 51834 -- macros y constantes
#define LIMITE_51834 51934
#define FACTOR_51834 5

int aplicar_limite51834(int valor) {
    if (valor > LIMITE_51834) return LIMITE_51834;
    return valor * FACTOR_51834;
}
