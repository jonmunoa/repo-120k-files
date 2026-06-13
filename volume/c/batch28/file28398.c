// fichero 28398 -- macros y constantes
#define LIMITE_28398 28498
#define FACTOR_28398 4

int aplicar_limite28398(int valor) {
    if (valor > LIMITE_28398) return LIMITE_28398;
    return valor * FACTOR_28398;
}
