// fichero 6038 -- macros y constantes -- MODIFICADO
#define LIMITE_6038 6238
#define FACTOR_6038 5

int aplicar_limite6038(int valor) {
    if (valor > LIMITE_6038) return LIMITE_6038;
    return valor * FACTOR_6038;
}
