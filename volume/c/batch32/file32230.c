// fichero 32230 -- macros y constantes -- MODIFICADO
#define LIMITE_32230 32430
#define FACTOR_32230 2

int aplicar_limite32230(int valor) {
    if (valor > LIMITE_32230) return LIMITE_32230;
    return valor * FACTOR_32230;
}
