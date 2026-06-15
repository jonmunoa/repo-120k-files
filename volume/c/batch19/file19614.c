// fichero 19614 -- macros y constantes -- MODIFICADO
#define LIMITE_19614 19814
#define FACTOR_19614 6

int aplicar_limite19614(int valor) {
    if (valor > LIMITE_19614) return LIMITE_19614;
    return valor * FACTOR_19614;
}
