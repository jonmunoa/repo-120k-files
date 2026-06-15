// fichero 49894 -- macros y constantes -- MODIFICADO
#define LIMITE_49894 50094
#define FACTOR_49894 6

int aplicar_limite49894(int valor) {
    if (valor > LIMITE_49894) return LIMITE_49894;
    return valor * FACTOR_49894;
}
