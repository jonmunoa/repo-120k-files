// fichero 31462 -- macros y constantes
#define LIMITE_31462 31562
#define FACTOR_31462 3

int aplicar_limite31462(int valor) {
    if (valor > LIMITE_31462) return LIMITE_31462;
    return valor * FACTOR_31462;
}
