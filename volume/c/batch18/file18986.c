// fichero 18986 -- macros y constantes -- MODIFICADO
#define LIMITE_18986 19186
#define FACTOR_18986 3

int aplicar_limite18986(int valor) {
    if (valor > LIMITE_18986) return LIMITE_18986;
    return valor * FACTOR_18986;
}
