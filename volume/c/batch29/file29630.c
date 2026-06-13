// fichero 29630 -- macros y constantes
#define LIMITE_29630 29730
#define FACTOR_29630 1

int aplicar_limite29630(int valor) {
    if (valor > LIMITE_29630) return LIMITE_29630;
    return valor * FACTOR_29630;
}
