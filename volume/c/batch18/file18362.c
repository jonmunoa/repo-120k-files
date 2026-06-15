// fichero 18362 -- macros y constantes -- MODIFICADO
#define LIMITE_18362 18562
#define FACTOR_18362 4

int aplicar_limite18362(int valor) {
    if (valor > LIMITE_18362) return LIMITE_18362;
    return valor * FACTOR_18362;
}
