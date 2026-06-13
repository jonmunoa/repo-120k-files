// fichero 41026 -- macros y constantes
#define LIMITE_41026 41126
#define FACTOR_41026 2

int aplicar_limite41026(int valor) {
    if (valor > LIMITE_41026) return LIMITE_41026;
    return valor * FACTOR_41026;
}
