// fichero 44862 -- macros y constantes -- MODIFICADO
#define LIMITE_44862 45062
#define FACTOR_44862 4

int aplicar_limite44862(int valor) {
    if (valor > LIMITE_44862) return LIMITE_44862;
    return valor * FACTOR_44862;
}
