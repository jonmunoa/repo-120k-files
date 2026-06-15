// fichero 20894 -- macros y constantes -- MODIFICADO
#define LIMITE_20894 21094
#define FACTOR_20894 6

int aplicar_limite20894(int valor) {
    if (valor > LIMITE_20894) return LIMITE_20894;
    return valor * FACTOR_20894;
}
