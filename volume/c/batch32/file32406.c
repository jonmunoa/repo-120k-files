// fichero 32406 -- macros y constantes -- MODIFICADO
#define LIMITE_32406 32606
#define FACTOR_32406 3

int aplicar_limite32406(int valor) {
    if (valor > LIMITE_32406) return LIMITE_32406;
    return valor * FACTOR_32406;
}
