// fichero 30870 -- macros y constantes -- MODIFICADO
#define LIMITE_30870 31070
#define FACTOR_30870 2

int aplicar_limite30870(int valor) {
    if (valor > LIMITE_30870) return LIMITE_30870;
    return valor * FACTOR_30870;
}
