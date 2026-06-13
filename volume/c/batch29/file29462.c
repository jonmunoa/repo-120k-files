// fichero 29462 -- macros y constantes
#define LIMITE_29462 29562
#define FACTOR_29462 3

int aplicar_limite29462(int valor) {
    if (valor > LIMITE_29462) return LIMITE_29462;
    return valor * FACTOR_29462;
}
