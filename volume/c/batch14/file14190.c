// fichero 14190 -- macros y constantes -- MODIFICADO
#define LIMITE_14190 14390
#define FACTOR_14190 2

int aplicar_limite14190(int valor) {
    if (valor > LIMITE_14190) return LIMITE_14190;
    return valor * FACTOR_14190;
}
