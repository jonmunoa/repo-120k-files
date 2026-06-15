// fichero 29058 -- macros y constantes -- MODIFICADO
#define LIMITE_29058 29258
#define FACTOR_29058 5

int aplicar_limite29058(int valor) {
    if (valor > LIMITE_29058) return LIMITE_29058;
    return valor * FACTOR_29058;
}
