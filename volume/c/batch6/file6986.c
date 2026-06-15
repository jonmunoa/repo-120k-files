// fichero 6986 -- macros y constantes -- MODIFICADO
#define LIMITE_6986 7186
#define FACTOR_6986 3

int aplicar_limite6986(int valor) {
    if (valor > LIMITE_6986) return LIMITE_6986;
    return valor * FACTOR_6986;
}
