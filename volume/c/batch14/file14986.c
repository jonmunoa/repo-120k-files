// fichero 14986 -- macros y constantes -- MODIFICADO
#define LIMITE_14986 15186
#define FACTOR_14986 3

int aplicar_limite14986(int valor) {
    if (valor > LIMITE_14986) return LIMITE_14986;
    return valor * FACTOR_14986;
}
