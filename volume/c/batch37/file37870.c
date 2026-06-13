// fichero 37870 -- macros y constantes
#define LIMITE_37870 37970
#define FACTOR_37870 1

int aplicar_limite37870(int valor) {
    if (valor > LIMITE_37870) return LIMITE_37870;
    return valor * FACTOR_37870;
}
