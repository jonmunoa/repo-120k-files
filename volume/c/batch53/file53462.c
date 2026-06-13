// fichero 53462 -- macros y constantes
#define LIMITE_53462 53562
#define FACTOR_53462 3

int aplicar_limite53462(int valor) {
    if (valor > LIMITE_53462) return LIMITE_53462;
    return valor * FACTOR_53462;
}
