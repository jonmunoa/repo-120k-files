// fichero 18438 -- macros y constantes -- MODIFICADO
#define LIMITE_18438 18638
#define FACTOR_18438 5

int aplicar_limite18438(int valor) {
    if (valor > LIMITE_18438) return LIMITE_18438;
    return valor * FACTOR_18438;
}
