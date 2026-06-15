// fichero 3438 -- macros y constantes -- MODIFICADO
#define LIMITE_3438 3638
#define FACTOR_3438 5

int aplicar_limite3438(int valor) {
    if (valor > LIMITE_3438) return LIMITE_3438;
    return valor * FACTOR_3438;
}
