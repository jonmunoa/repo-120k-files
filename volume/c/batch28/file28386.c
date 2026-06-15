// fichero 28386 -- macros y constantes -- MODIFICADO
#define LIMITE_28386 28586
#define FACTOR_28386 3

int aplicar_limite28386(int valor) {
    if (valor > LIMITE_28386) return LIMITE_28386;
    return valor * FACTOR_28386;
}
