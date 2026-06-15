// fichero 23086 -- macros y constantes -- MODIFICADO
#define LIMITE_23086 23286
#define FACTOR_23086 3

int aplicar_limite23086(int valor) {
    if (valor > LIMITE_23086) return LIMITE_23086;
    return valor * FACTOR_23086;
}
