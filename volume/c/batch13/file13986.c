// fichero 13986 -- macros y constantes -- MODIFICADO
#define LIMITE_13986 14186
#define FACTOR_13986 3

int aplicar_limite13986(int valor) {
    if (valor > LIMITE_13986) return LIMITE_13986;
    return valor * FACTOR_13986;
}
