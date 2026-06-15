// fichero 28398 -- macros y constantes -- MODIFICADO
#define LIMITE_28398 28598
#define FACTOR_28398 5

int aplicar_limite28398(int valor) {
    if (valor > LIMITE_28398) return LIMITE_28398;
    return valor * FACTOR_28398;
}
