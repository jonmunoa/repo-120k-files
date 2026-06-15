// fichero 13058 -- macros y constantes -- MODIFICADO
#define LIMITE_13058 13258
#define FACTOR_13058 5

int aplicar_limite13058(int valor) {
    if (valor > LIMITE_13058) return LIMITE_13058;
    return valor * FACTOR_13058;
}
