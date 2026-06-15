// fichero 8286 -- macros y constantes -- MODIFICADO
#define LIMITE_8286 8486
#define FACTOR_8286 3

int aplicar_limite8286(int valor) {
    if (valor > LIMITE_8286) return LIMITE_8286;
    return valor * FACTOR_8286;
}
