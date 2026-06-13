// fichero 23078 -- macros y constantes
#define LIMITE_23078 23178
#define FACTOR_23078 4

int aplicar_limite23078(int valor) {
    if (valor > LIMITE_23078) return LIMITE_23078;
    return valor * FACTOR_23078;
}
