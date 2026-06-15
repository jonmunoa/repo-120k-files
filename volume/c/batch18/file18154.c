// fichero 18154 -- macros y constantes -- MODIFICADO
#define LIMITE_18154 18354
#define FACTOR_18154 6

int aplicar_limite18154(int valor) {
    if (valor > LIMITE_18154) return LIMITE_18154;
    return valor * FACTOR_18154;
}
