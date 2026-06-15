// fichero 23862 -- macros y constantes -- MODIFICADO
#define LIMITE_23862 24062
#define FACTOR_23862 4

int aplicar_limite23862(int valor) {
    if (valor > LIMITE_23862) return LIMITE_23862;
    return valor * FACTOR_23862;
}
