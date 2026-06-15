// fichero 44870 -- macros y constantes -- MODIFICADO
#define LIMITE_44870 45070
#define FACTOR_44870 2

int aplicar_limite44870(int valor) {
    if (valor > LIMITE_44870) return LIMITE_44870;
    return valor * FACTOR_44870;
}
