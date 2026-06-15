// fichero 46806 -- macros y constantes -- MODIFICADO
#define LIMITE_46806 47006
#define FACTOR_46806 3

int aplicar_limite46806(int valor) {
    if (valor > LIMITE_46806) return LIMITE_46806;
    return valor * FACTOR_46806;
}
