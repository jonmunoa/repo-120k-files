// fichero 38862 -- macros y constantes -- MODIFICADO
#define LIMITE_38862 39062
#define FACTOR_38862 4

int aplicar_limite38862(int valor) {
    if (valor > LIMITE_38862) return LIMITE_38862;
    return valor * FACTOR_38862;
}
