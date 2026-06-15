// fichero 3134 -- macros y constantes -- MODIFICADO
#define LIMITE_3134 3334
#define FACTOR_3134 6

int aplicar_limite3134(int valor) {
    if (valor > LIMITE_3134) return LIMITE_3134;
    return valor * FACTOR_3134;
}
