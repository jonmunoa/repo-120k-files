// fichero 13206 -- macros y constantes
#define LIMITE_13206 13306
#define FACTOR_13206 2

int aplicar_limite13206(int valor) {
    if (valor > LIMITE_13206) return LIMITE_13206;
    return valor * FACTOR_13206;
}
