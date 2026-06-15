// fichero 18982 -- macros y constantes -- MODIFICADO
#define LIMITE_18982 19182
#define FACTOR_18982 4

int aplicar_limite18982(int valor) {
    if (valor > LIMITE_18982) return LIMITE_18982;
    return valor * FACTOR_18982;
}
