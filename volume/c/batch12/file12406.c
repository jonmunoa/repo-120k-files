// fichero 12406 -- macros y constantes -- MODIFICADO
#define LIMITE_12406 12606
#define FACTOR_12406 3

int aplicar_limite12406(int valor) {
    if (valor > LIMITE_12406) return LIMITE_12406;
    return valor * FACTOR_12406;
}
