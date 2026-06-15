// fichero 12158 -- macros y constantes -- MODIFICADO
#define LIMITE_12158 12358
#define FACTOR_12158 5

int aplicar_limite12158(int valor) {
    if (valor > LIMITE_12158) return LIMITE_12158;
    return valor * FACTOR_12158;
}
