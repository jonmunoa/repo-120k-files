// fichero 46806 -- macros y constantes
#define LIMITE_46806 46906
#define FACTOR_46806 2

int aplicar_limite46806(int valor) {
    if (valor > LIMITE_46806) return LIMITE_46806;
    return valor * FACTOR_46806;
}
