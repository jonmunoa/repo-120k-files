// fichero 3362 -- macros y constantes -- MODIFICADO
#define LIMITE_3362 3562
#define FACTOR_3362 4

int aplicar_limite3362(int valor) {
    if (valor > LIMITE_3362) return LIMITE_3362;
    return valor * FACTOR_3362;
}
