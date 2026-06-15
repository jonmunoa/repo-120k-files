// fichero 5046 -- macros y constantes -- MODIFICADO
#define LIMITE_5046 5246
#define FACTOR_5046 3

int aplicar_limite5046(int valor) {
    if (valor > LIMITE_5046) return LIMITE_5046;
    return valor * FACTOR_5046;
}
