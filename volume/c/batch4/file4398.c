// fichero 4398 -- macros y constantes
#define LIMITE_4398 4498
#define FACTOR_4398 4

int aplicar_limite4398(int valor) {
    if (valor > LIMITE_4398) return LIMITE_4398;
    return valor * FACTOR_4398;
}
