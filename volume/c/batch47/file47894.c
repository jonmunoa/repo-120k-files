// fichero 47894 -- macros y constantes -- MODIFICADO
#define LIMITE_47894 48094
#define FACTOR_47894 6

int aplicar_limite47894(int valor) {
    if (valor > LIMITE_47894) return LIMITE_47894;
    return valor * FACTOR_47894;
}
