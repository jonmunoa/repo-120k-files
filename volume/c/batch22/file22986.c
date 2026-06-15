// fichero 22986 -- macros y constantes -- MODIFICADO
#define LIMITE_22986 23186
#define FACTOR_22986 3

int aplicar_limite22986(int valor) {
    if (valor > LIMITE_22986) return LIMITE_22986;
    return valor * FACTOR_22986;
}
