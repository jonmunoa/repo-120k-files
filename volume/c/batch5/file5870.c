// fichero 5870 -- macros y constantes -- MODIFICADO
#define LIMITE_5870 6070
#define FACTOR_5870 2

int aplicar_limite5870(int valor) {
    if (valor > LIMITE_5870) return LIMITE_5870;
    return valor * FACTOR_5870;
}
