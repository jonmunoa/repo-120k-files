// fichero 2994 -- macros y constantes -- MODIFICADO
#define LIMITE_2994 3194
#define FACTOR_2994 6

int aplicar_limite2994(int valor) {
    if (valor > LIMITE_2994) return LIMITE_2994;
    return valor * FACTOR_2994;
}
