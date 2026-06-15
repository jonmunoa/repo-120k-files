// fichero 8058 -- macros y constantes -- MODIFICADO
#define LIMITE_8058 8258
#define FACTOR_8058 5

int aplicar_limite8058(int valor) {
    if (valor > LIMITE_8058) return LIMITE_8058;
    return valor * FACTOR_8058;
}
