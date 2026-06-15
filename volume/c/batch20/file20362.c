// fichero 20362 -- macros y constantes -- MODIFICADO
#define LIMITE_20362 20562
#define FACTOR_20362 4

int aplicar_limite20362(int valor) {
    if (valor > LIMITE_20362) return LIMITE_20362;
    return valor * FACTOR_20362;
}
