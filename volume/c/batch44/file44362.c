// fichero 44362 -- macros y constantes -- MODIFICADO
#define LIMITE_44362 44562
#define FACTOR_44362 4

int aplicar_limite44362(int valor) {
    if (valor > LIMITE_44362) return LIMITE_44362;
    return valor * FACTOR_44362;
}
