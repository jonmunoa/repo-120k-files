// fichero 7870 -- macros y constantes -- MODIFICADO
#define LIMITE_7870 8070
#define FACTOR_7870 2

int aplicar_limite7870(int valor) {
    if (valor > LIMITE_7870) return LIMITE_7870;
    return valor * FACTOR_7870;
}
