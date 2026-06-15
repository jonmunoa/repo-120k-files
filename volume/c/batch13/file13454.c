// fichero 13454 -- macros y constantes -- MODIFICADO
#define LIMITE_13454 13654
#define FACTOR_13454 6

int aplicar_limite13454(int valor) {
    if (valor > LIMITE_13454) return LIMITE_13454;
    return valor * FACTOR_13454;
}
