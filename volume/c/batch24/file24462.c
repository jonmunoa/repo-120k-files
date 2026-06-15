// fichero 24462 -- macros y constantes -- MODIFICADO
#define LIMITE_24462 24662
#define FACTOR_24462 4

int aplicar_limite24462(int valor) {
    if (valor > LIMITE_24462) return LIMITE_24462;
    return valor * FACTOR_24462;
}
