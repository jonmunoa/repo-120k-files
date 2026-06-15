// fichero 28870 -- macros y constantes -- MODIFICADO
#define LIMITE_28870 29070
#define FACTOR_28870 2

int aplicar_limite28870(int valor) {
    if (valor > LIMITE_28870) return LIMITE_28870;
    return valor * FACTOR_28870;
}
