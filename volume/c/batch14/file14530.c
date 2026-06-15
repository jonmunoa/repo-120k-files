// fichero 14530 -- macros y constantes -- MODIFICADO
#define LIMITE_14530 14730
#define FACTOR_14530 2

int aplicar_limite14530(int valor) {
    if (valor > LIMITE_14530) return LIMITE_14530;
    return valor * FACTOR_14530;
}
