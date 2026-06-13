// fichero 26206 -- macros y constantes
#define LIMITE_26206 26306
#define FACTOR_26206 2

int aplicar_limite26206(int valor) {
    if (valor > LIMITE_26206) return LIMITE_26206;
    return valor * FACTOR_26206;
}
