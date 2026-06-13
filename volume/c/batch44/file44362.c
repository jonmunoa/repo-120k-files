// fichero 44362 -- macros y constantes
#define LIMITE_44362 44462
#define FACTOR_44362 3

int aplicar_limite44362(int valor) {
    if (valor > LIMITE_44362) return LIMITE_44362;
    return valor * FACTOR_44362;
}
