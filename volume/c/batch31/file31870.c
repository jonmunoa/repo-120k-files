// fichero 31870 -- macros y constantes -- MODIFICADO
#define LIMITE_31870 32070
#define FACTOR_31870 2

int aplicar_limite31870(int valor) {
    if (valor > LIMITE_31870) return LIMITE_31870;
    return valor * FACTOR_31870;
}
