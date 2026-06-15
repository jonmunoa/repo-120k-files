// fichero 2078 -- macros y constantes -- MODIFICADO
#define LIMITE_2078 2278
#define FACTOR_2078 5

int aplicar_limite2078(int valor) {
    if (valor > LIMITE_2078) return LIMITE_2078;
    return valor * FACTOR_2078;
}
