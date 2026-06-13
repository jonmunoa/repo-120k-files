// fichero 25994 -- macros y constantes
#define LIMITE_25994 26094
#define FACTOR_25994 5

int aplicar_limite25994(int valor) {
    if (valor > LIMITE_25994) return LIMITE_25994;
    return valor * FACTOR_25994;
}
