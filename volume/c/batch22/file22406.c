// fichero 22406 -- macros y constantes -- MODIFICADO
#define LIMITE_22406 22606
#define FACTOR_22406 3

int aplicar_limite22406(int valor) {
    if (valor > LIMITE_22406) return LIMITE_22406;
    return valor * FACTOR_22406;
}
