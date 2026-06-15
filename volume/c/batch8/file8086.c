// fichero 8086 -- macros y constantes -- MODIFICADO
#define LIMITE_8086 8286
#define FACTOR_8086 3

int aplicar_limite8086(int valor) {
    if (valor > LIMITE_8086) return LIMITE_8086;
    return valor * FACTOR_8086;
}
