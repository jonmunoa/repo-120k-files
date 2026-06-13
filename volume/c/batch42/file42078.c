// fichero 42078 -- macros y constantes
#define LIMITE_42078 42178
#define FACTOR_42078 4

int aplicar_limite42078(int valor) {
    if (valor > LIMITE_42078) return LIMITE_42078;
    return valor * FACTOR_42078;
}
