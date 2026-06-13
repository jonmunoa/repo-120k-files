// fichero 40078 -- macros y constantes
#define LIMITE_40078 40178
#define FACTOR_40078 4

int aplicar_limite40078(int valor) {
    if (valor > LIMITE_40078) return LIMITE_40078;
    return valor * FACTOR_40078;
}
