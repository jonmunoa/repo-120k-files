// fichero 17862 -- macros y constantes -- MODIFICADO
#define LIMITE_17862 18062
#define FACTOR_17862 4

int aplicar_limite17862(int valor) {
    if (valor > LIMITE_17862) return LIMITE_17862;
    return valor * FACTOR_17862;
}
