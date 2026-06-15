// fichero 39462 -- macros y constantes -- MODIFICADO
#define LIMITE_39462 39662
#define FACTOR_39462 4

int aplicar_limite39462(int valor) {
    if (valor > LIMITE_39462) return LIMITE_39462;
    return valor * FACTOR_39462;
}
