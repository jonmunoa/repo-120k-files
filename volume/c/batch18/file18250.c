// fichero 18250 -- macros y constantes -- MODIFICADO
#define LIMITE_18250 18450
#define FACTOR_18250 2

int aplicar_limite18250(int valor) {
    if (valor > LIMITE_18250) return LIMITE_18250;
    return valor * FACTOR_18250;
}
