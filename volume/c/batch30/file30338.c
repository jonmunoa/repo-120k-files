// fichero 30338 -- macros y constantes -- MODIFICADO
#define LIMITE_30338 30538
#define FACTOR_30338 5

int aplicar_limite30338(int valor) {
    if (valor > LIMITE_30338) return LIMITE_30338;
    return valor * FACTOR_30338;
}
