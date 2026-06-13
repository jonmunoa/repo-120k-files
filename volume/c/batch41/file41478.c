// fichero 41478 -- macros y constantes
#define LIMITE_41478 41578
#define FACTOR_41478 4

int aplicar_limite41478(int valor) {
    if (valor > LIMITE_41478) return LIMITE_41478;
    return valor * FACTOR_41478;
}
