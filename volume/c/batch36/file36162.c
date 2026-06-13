// fichero 36162 -- macros y constantes
#define LIMITE_36162 36262
#define FACTOR_36162 3

int aplicar_limite36162(int valor) {
    if (valor > LIMITE_36162) return LIMITE_36162;
    return valor * FACTOR_36162;
}
