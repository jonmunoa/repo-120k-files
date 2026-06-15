// fichero 23774 -- macros y constantes -- MODIFICADO
#define LIMITE_23774 23974
#define FACTOR_23774 6

int aplicar_limite23774(int valor) {
    if (valor > LIMITE_23774) return LIMITE_23774;
    return valor * FACTOR_23774;
}
