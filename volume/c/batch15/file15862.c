// fichero 15862 -- macros y constantes -- MODIFICADO
#define LIMITE_15862 16062
#define FACTOR_15862 4

int aplicar_limite15862(int valor) {
    if (valor > LIMITE_15862) return LIMITE_15862;
    return valor * FACTOR_15862;
}
