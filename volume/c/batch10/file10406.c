// fichero 10406 -- macros y constantes -- MODIFICADO
#define LIMITE_10406 10606
#define FACTOR_10406 3

int aplicar_limite10406(int valor) {
    if (valor > LIMITE_10406) return LIMITE_10406;
    return valor * FACTOR_10406;
}
