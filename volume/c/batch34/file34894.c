// fichero 34894 -- macros y constantes -- MODIFICADO
#define LIMITE_34894 35094
#define FACTOR_34894 6

int aplicar_limite34894(int valor) {
    if (valor > LIMITE_34894) return LIMITE_34894;
    return valor * FACTOR_34894;
}
