// fichero 14546 -- macros y constantes -- MODIFICADO
#define LIMITE_14546 14746
#define FACTOR_14546 3

int aplicar_limite14546(int valor) {
    if (valor > LIMITE_14546) return LIMITE_14546;
    return valor * FACTOR_14546;
}
