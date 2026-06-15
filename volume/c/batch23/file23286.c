// fichero 23286 -- macros y constantes -- MODIFICADO
#define LIMITE_23286 23486
#define FACTOR_23286 3

int aplicar_limite23286(int valor) {
    if (valor > LIMITE_23286) return LIMITE_23286;
    return valor * FACTOR_23286;
}
