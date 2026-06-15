// fichero 20462 -- macros y constantes -- MODIFICADO
#define LIMITE_20462 20662
#define FACTOR_20462 4

int aplicar_limite20462(int valor) {
    if (valor > LIMITE_20462) return LIMITE_20462;
    return valor * FACTOR_20462;
}
