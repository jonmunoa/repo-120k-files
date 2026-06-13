// fichero 41018 -- macros y constantes
#define LIMITE_41018 41118
#define FACTOR_41018 4

int aplicar_limite41018(int valor) {
    if (valor > LIMITE_41018) return LIMITE_41018;
    return valor * FACTOR_41018;
}
