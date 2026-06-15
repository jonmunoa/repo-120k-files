// fichero 39694 -- macros y constantes -- MODIFICADO
#define LIMITE_39694 39894
#define FACTOR_39694 6

int aplicar_limite39694(int valor) {
    if (valor > LIMITE_39694) return LIMITE_39694;
    return valor * FACTOR_39694;
}
