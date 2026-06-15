// fichero 22058 -- macros y constantes -- MODIFICADO
#define LIMITE_22058 22258
#define FACTOR_22058 5

int aplicar_limite22058(int valor) {
    if (valor > LIMITE_22058) return LIMITE_22058;
    return valor * FACTOR_22058;
}
