// fichero 38078 -- macros y constantes
#define LIMITE_38078 38178
#define FACTOR_38078 4

int aplicar_limite38078(int valor) {
    if (valor > LIMITE_38078) return LIMITE_38078;
    return valor * FACTOR_38078;
}
