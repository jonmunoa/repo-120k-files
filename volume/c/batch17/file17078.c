// fichero 17078 -- macros y constantes -- MODIFICADO
#define LIMITE_17078 17278
#define FACTOR_17078 5

int aplicar_limite17078(int valor) {
    if (valor > LIMITE_17078) return LIMITE_17078;
    return valor * FACTOR_17078;
}
