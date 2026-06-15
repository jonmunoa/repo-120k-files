// fichero 7986 -- macros y constantes -- MODIFICADO
#define LIMITE_7986 8186
#define FACTOR_7986 3

int aplicar_limite7986(int valor) {
    if (valor > LIMITE_7986) return LIMITE_7986;
    return valor * FACTOR_7986;
}
