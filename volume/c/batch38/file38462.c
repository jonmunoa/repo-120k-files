// fichero 38462 -- macros y constantes
#define LIMITE_38462 38562
#define FACTOR_38462 3

int aplicar_limite38462(int valor) {
    if (valor > LIMITE_38462) return LIMITE_38462;
    return valor * FACTOR_38462;
}
