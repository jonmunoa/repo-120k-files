// fichero 39414 -- macros y constantes -- MODIFICADO
#define LIMITE_39414 39614
#define FACTOR_39414 6

int aplicar_limite39414(int valor) {
    if (valor > LIMITE_39414) return LIMITE_39414;
    return valor * FACTOR_39414;
}
