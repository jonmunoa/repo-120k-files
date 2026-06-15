// fichero 13438 -- macros y constantes -- MODIFICADO
#define LIMITE_13438 13638
#define FACTOR_13438 5

int aplicar_limite13438(int valor) {
    if (valor > LIMITE_13438) return LIMITE_13438;
    return valor * FACTOR_13438;
}
