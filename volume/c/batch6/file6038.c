// fichero 6038 -- macros y constantes
#define LIMITE_6038 6138
#define FACTOR_6038 4

int aplicar_limite6038(int valor) {
    if (valor > LIMITE_6038) return LIMITE_6038;
    return valor * FACTOR_6038;
}
