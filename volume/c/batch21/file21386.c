// fichero 21386 -- macros y constantes -- MODIFICADO
#define LIMITE_21386 21586
#define FACTOR_21386 3

int aplicar_limite21386(int valor) {
    if (valor > LIMITE_21386) return LIMITE_21386;
    return valor * FACTOR_21386;
}
