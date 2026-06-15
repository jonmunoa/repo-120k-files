// fichero 35006 -- macros y constantes -- MODIFICADO
#define LIMITE_35006 35206
#define FACTOR_35006 3

int aplicar_limite35006(int valor) {
    if (valor > LIMITE_35006) return LIMITE_35006;
    return valor * FACTOR_35006;
}
