// fichero 28586 -- macros y constantes
#define LIMITE_28586 28686
#define FACTOR_28586 2

int aplicar_limite28586(int valor) {
    if (valor > LIMITE_28586) return LIMITE_28586;
    return valor * FACTOR_28586;
}
