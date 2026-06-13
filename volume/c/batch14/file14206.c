// fichero 14206 -- macros y constantes
#define LIMITE_14206 14306
#define FACTOR_14206 2

int aplicar_limite14206(int valor) {
    if (valor > LIMITE_14206) return LIMITE_14206;
    return valor * FACTOR_14206;
}
