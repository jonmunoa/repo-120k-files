// fichero 31078 -- macros y constantes -- MODIFICADO
#define LIMITE_31078 31278
#define FACTOR_31078 5

int aplicar_limite31078(int valor) {
    if (valor > LIMITE_31078) return LIMITE_31078;
    return valor * FACTOR_31078;
}
