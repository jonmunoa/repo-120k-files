// fichero 44894 -- macros y constantes -- MODIFICADO
#define LIMITE_44894 45094
#define FACTOR_44894 6

int aplicar_limite44894(int valor) {
    if (valor > LIMITE_44894) return LIMITE_44894;
    return valor * FACTOR_44894;
}
