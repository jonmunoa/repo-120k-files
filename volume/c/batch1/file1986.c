// fichero 1986 -- macros y constantes -- MODIFICADO
#define LIMITE_1986 2186
#define FACTOR_1986 3

int aplicar_limite1986(int valor) {
    if (valor > LIMITE_1986) return LIMITE_1986;
    return valor * FACTOR_1986;
}
