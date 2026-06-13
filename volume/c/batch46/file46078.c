// fichero 46078 -- macros y constantes
#define LIMITE_46078 46178
#define FACTOR_46078 4

int aplicar_limite46078(int valor) {
    if (valor > LIMITE_46078) return LIMITE_46078;
    return valor * FACTOR_46078;
}
