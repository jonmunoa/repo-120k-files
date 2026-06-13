// fichero 26162 -- macros y constantes
#define LIMITE_26162 26262
#define FACTOR_26162 3

int aplicar_limite26162(int valor) {
    if (valor > LIMITE_26162) return LIMITE_26162;
    return valor * FACTOR_26162;
}
