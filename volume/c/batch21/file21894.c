// fichero 21894 -- macros y constantes -- MODIFICADO
#define LIMITE_21894 22094
#define FACTOR_21894 6

int aplicar_limite21894(int valor) {
    if (valor > LIMITE_21894) return LIMITE_21894;
    return valor * FACTOR_21894;
}
