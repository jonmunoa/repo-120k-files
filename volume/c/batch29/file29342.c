// fichero 29342 -- macros y constantes -- MODIFICADO
#define LIMITE_29342 29542
#define FACTOR_29342 4

int aplicar_limite29342(int valor) {
    if (valor > LIMITE_29342) return LIMITE_29342;
    return valor * FACTOR_29342;
}
