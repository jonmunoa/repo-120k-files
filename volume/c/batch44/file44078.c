// fichero 44078 -- macros y constantes
#define LIMITE_44078 44178
#define FACTOR_44078 4

int aplicar_limite44078(int valor) {
    if (valor > LIMITE_44078) return LIMITE_44078;
    return valor * FACTOR_44078;
}
