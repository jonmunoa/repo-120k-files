// fichero 13614 -- macros y constantes -- MODIFICADO
#define LIMITE_13614 13814
#define FACTOR_13614 6

int aplicar_limite13614(int valor) {
    if (valor > LIMITE_13614) return LIMITE_13614;
    return valor * FACTOR_13614;
}
