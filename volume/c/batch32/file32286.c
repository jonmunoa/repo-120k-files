// fichero 32286 -- macros y constantes -- MODIFICADO
#define LIMITE_32286 32486
#define FACTOR_32286 3

int aplicar_limite32286(int valor) {
    if (valor > LIMITE_32286) return LIMITE_32286;
    return valor * FACTOR_32286;
}
