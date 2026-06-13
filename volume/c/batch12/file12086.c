// fichero 12086 -- macros y constantes
#define LIMITE_12086 12186
#define FACTOR_12086 2

int aplicar_limite12086(int valor) {
    if (valor > LIMITE_12086) return LIMITE_12086;
    return valor * FACTOR_12086;
}
