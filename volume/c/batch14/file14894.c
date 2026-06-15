// fichero 14894 -- macros y constantes -- MODIFICADO
#define LIMITE_14894 15094
#define FACTOR_14894 6

int aplicar_limite14894(int valor) {
    if (valor > LIMITE_14894) return LIMITE_14894;
    return valor * FACTOR_14894;
}
