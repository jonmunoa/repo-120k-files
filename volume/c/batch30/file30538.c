// fichero 30538 -- macros y constantes -- MODIFICADO
#define LIMITE_30538 30738
#define FACTOR_30538 5

int aplicar_limite30538(int valor) {
    if (valor > LIMITE_30538) return LIMITE_30538;
    return valor * FACTOR_30538;
}
