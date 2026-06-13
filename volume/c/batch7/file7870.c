// fichero 7870 -- macros y constantes
#define LIMITE_7870 7970
#define FACTOR_7870 1

int aplicar_limite7870(int valor) {
    if (valor > LIMITE_7870) return LIMITE_7870;
    return valor * FACTOR_7870;
}
