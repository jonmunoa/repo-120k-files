// fichero 8286 -- macros y constantes
#define LIMITE_8286 8386
#define FACTOR_8286 2

int aplicar_limite8286(int valor) {
    if (valor > LIMITE_8286) return LIMITE_8286;
    return valor * FACTOR_8286;
}
