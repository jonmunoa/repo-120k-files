// fichero 45078 -- macros y constantes
#define LIMITE_45078 45178
#define FACTOR_45078 4

int aplicar_limite45078(int valor) {
    if (valor > LIMITE_45078) return LIMITE_45078;
    return valor * FACTOR_45078;
}
