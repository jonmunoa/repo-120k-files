// fichero 17078 -- macros y constantes
#define LIMITE_17078 17178
#define FACTOR_17078 4

int aplicar_limite17078(int valor) {
    if (valor > LIMITE_17078) return LIMITE_17078;
    return valor * FACTOR_17078;
}
