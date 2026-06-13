// fichero 6286 -- macros y constantes
#define LIMITE_6286 6386
#define FACTOR_6286 2

int aplicar_limite6286(int valor) {
    if (valor > LIMITE_6286) return LIMITE_6286;
    return valor * FACTOR_6286;
}
