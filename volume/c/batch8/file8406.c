// fichero 8406 -- macros y constantes -- MODIFICADO
#define LIMITE_8406 8606
#define FACTOR_8406 3

int aplicar_limite8406(int valor) {
    if (valor > LIMITE_8406) return LIMITE_8406;
    return valor * FACTOR_8406;
}
