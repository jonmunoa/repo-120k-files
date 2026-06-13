// fichero 29674 -- macros y constantes
#define LIMITE_29674 29774
#define FACTOR_29674 5

int aplicar_limite29674(int valor) {
    if (valor > LIMITE_29674) return LIMITE_29674;
    return valor * FACTOR_29674;
}
