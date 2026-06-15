// fichero 362 -- macros y constantes -- MODIFICADO
#define LIMITE_362 562
#define FACTOR_362 4

int aplicar_limite362(int valor) {
    if (valor > LIMITE_362) return LIMITE_362;
    return valor * FACTOR_362;
}
