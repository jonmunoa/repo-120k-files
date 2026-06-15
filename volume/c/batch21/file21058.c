// fichero 21058 -- macros y constantes -- MODIFICADO
#define LIMITE_21058 21258
#define FACTOR_21058 5

int aplicar_limite21058(int valor) {
    if (valor > LIMITE_21058) return LIMITE_21058;
    return valor * FACTOR_21058;
}
