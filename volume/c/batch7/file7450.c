// fichero 7450 -- macros y constantes -- MODIFICADO
#define LIMITE_7450 7650
#define FACTOR_7450 2

int aplicar_limite7450(int valor) {
    if (valor > LIMITE_7450) return LIMITE_7450;
    return valor * FACTOR_7450;
}
