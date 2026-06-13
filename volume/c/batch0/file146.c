// fichero 146 -- macros y constantes
#define LIMITE_146 246
#define FACTOR_146 2

int aplicar_limite146(int valor) {
    if (valor > LIMITE_146) return LIMITE_146;
    return valor * FACTOR_146;
}
