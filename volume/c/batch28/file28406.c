// fichero 28406 -- macros y constantes -- MODIFICADO
#define LIMITE_28406 28606
#define FACTOR_28406 3

int aplicar_limite28406(int valor) {
    if (valor > LIMITE_28406) return LIMITE_28406;
    return valor * FACTOR_28406;
}
