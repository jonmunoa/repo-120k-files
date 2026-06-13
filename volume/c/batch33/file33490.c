// fichero 33490 -- macros y constantes
#define LIMITE_33490 33590
#define FACTOR_33490 1

int aplicar_limite33490(int valor) {
    if (valor > LIMITE_33490) return LIMITE_33490;
    return valor * FACTOR_33490;
}
