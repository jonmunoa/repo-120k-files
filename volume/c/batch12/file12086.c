// fichero 12086 -- macros y constantes -- MODIFICADO
#define LIMITE_12086 12286
#define FACTOR_12086 3

int aplicar_limite12086(int valor) {
    if (valor > LIMITE_12086) return LIMITE_12086;
    return valor * FACTOR_12086;
}
