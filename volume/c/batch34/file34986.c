// fichero 34986 -- macros y constantes -- MODIFICADO
#define LIMITE_34986 35186
#define FACTOR_34986 3

int aplicar_limite34986(int valor) {
    if (valor > LIMITE_34986) return LIMITE_34986;
    return valor * FACTOR_34986;
}
