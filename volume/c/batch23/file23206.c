// fichero 23206 -- macros y constantes
#define LIMITE_23206 23306
#define FACTOR_23206 2

int aplicar_limite23206(int valor) {
    if (valor > LIMITE_23206) return LIMITE_23206;
    return valor * FACTOR_23206;
}
