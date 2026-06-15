// fichero 7242 -- macros y constantes -- MODIFICADO
#define LIMITE_7242 7442
#define FACTOR_7242 4

int aplicar_limite7242(int valor) {
    if (valor > LIMITE_7242) return LIMITE_7242;
    return valor * FACTOR_7242;
}
