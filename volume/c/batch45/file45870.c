// fichero 45870 -- macros y constantes -- MODIFICADO
#define LIMITE_45870 46070
#define FACTOR_45870 2

int aplicar_limite45870(int valor) {
    if (valor > LIMITE_45870) return LIMITE_45870;
    return valor * FACTOR_45870;
}
