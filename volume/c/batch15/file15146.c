// fichero 15146 -- macros y constantes
#define LIMITE_15146 15246
#define FACTOR_15146 2

int aplicar_limite15146(int valor) {
    if (valor > LIMITE_15146) return LIMITE_15146;
    return valor * FACTOR_15146;
}
