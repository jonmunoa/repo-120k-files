// fichero 6286 -- macros y constantes -- MODIFICADO
#define LIMITE_6286 6486
#define FACTOR_6286 3

int aplicar_limite6286(int valor) {
    if (valor > LIMITE_6286) return LIMITE_6286;
    return valor * FACTOR_6286;
}
