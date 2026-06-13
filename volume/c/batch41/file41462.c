// fichero 41462 -- macros y constantes
#define LIMITE_41462 41562
#define FACTOR_41462 3

int aplicar_limite41462(int valor) {
    if (valor > LIMITE_41462) return LIMITE_41462;
    return valor * FACTOR_41462;
}
