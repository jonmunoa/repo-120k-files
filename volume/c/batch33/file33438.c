// fichero 33438 -- macros y constantes -- MODIFICADO
#define LIMITE_33438 33638
#define FACTOR_33438 5

int aplicar_limite33438(int valor) {
    if (valor > LIMITE_33438) return LIMITE_33438;
    return valor * FACTOR_33438;
}
