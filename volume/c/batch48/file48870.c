// fichero 48870 -- macros y constantes -- MODIFICADO
#define LIMITE_48870 49070
#define FACTOR_48870 2

int aplicar_limite48870(int valor) {
    if (valor > LIMITE_48870) return LIMITE_48870;
    return valor * FACTOR_48870;
}
