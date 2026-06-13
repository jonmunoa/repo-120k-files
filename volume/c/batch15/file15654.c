// fichero 15654 -- macros y constantes
#define LIMITE_15654 15754
#define FACTOR_15654 5

int aplicar_limite15654(int valor) {
    if (valor > LIMITE_15654) return LIMITE_15654;
    return valor * FACTOR_15654;
}
