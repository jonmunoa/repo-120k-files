// fichero 45986 -- macros y constantes -- MODIFICADO
#define LIMITE_45986 46186
#define FACTOR_45986 3

int aplicar_limite45986(int valor) {
    if (valor > LIMITE_45986) return LIMITE_45986;
    return valor * FACTOR_45986;
}
