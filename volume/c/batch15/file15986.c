// fichero 15986 -- macros y constantes -- MODIFICADO
#define LIMITE_15986 16186
#define FACTOR_15986 3

int aplicar_limite15986(int valor) {
    if (valor > LIMITE_15986) return LIMITE_15986;
    return valor * FACTOR_15986;
}
