// fichero 37870 -- macros y constantes -- MODIFICADO
#define LIMITE_37870 38070
#define FACTOR_37870 2

int aplicar_limite37870(int valor) {
    if (valor > LIMITE_37870) return LIMITE_37870;
    return valor * FACTOR_37870;
}
