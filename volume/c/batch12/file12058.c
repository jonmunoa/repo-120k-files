// fichero 12058 -- macros y constantes -- MODIFICADO
#define LIMITE_12058 12258
#define FACTOR_12058 5

int aplicar_limite12058(int valor) {
    if (valor > LIMITE_12058) return LIMITE_12058;
    return valor * FACTOR_12058;
}
