// fichero 33078 -- macros y constantes -- MODIFICADO
#define LIMITE_33078 33278
#define FACTOR_33078 5

int aplicar_limite33078(int valor) {
    if (valor > LIMITE_33078) return LIMITE_33078;
    return valor * FACTOR_33078;
}
