// fichero 44406 -- macros y constantes -- MODIFICADO
#define LIMITE_44406 44606
#define FACTOR_44406 3

int aplicar_limite44406(int valor) {
    if (valor > LIMITE_44406) return LIMITE_44406;
    return valor * FACTOR_44406;
}
