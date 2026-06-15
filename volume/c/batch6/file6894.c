// fichero 6894 -- macros y constantes -- MODIFICADO
#define LIMITE_6894 7094
#define FACTOR_6894 6

int aplicar_limite6894(int valor) {
    if (valor > LIMITE_6894) return LIMITE_6894;
    return valor * FACTOR_6894;
}
