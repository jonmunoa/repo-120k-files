// fichero 44462 -- macros y constantes
#define LIMITE_44462 44562
#define FACTOR_44462 3

int aplicar_limite44462(int valor) {
    if (valor > LIMITE_44462) return LIMITE_44462;
    return valor * FACTOR_44462;
}
