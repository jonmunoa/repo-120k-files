// fichero 8086 -- macros y constantes
#define LIMITE_8086 8186
#define FACTOR_8086 2

int aplicar_limite8086(int valor) {
    if (valor > LIMITE_8086) return LIMITE_8086;
    return valor * FACTOR_8086;
}
