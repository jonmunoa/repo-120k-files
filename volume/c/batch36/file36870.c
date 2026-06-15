// fichero 36870 -- macros y constantes -- MODIFICADO
#define LIMITE_36870 37070
#define FACTOR_36870 2

int aplicar_limite36870(int valor) {
    if (valor > LIMITE_36870) return LIMITE_36870;
    return valor * FACTOR_36870;
}
