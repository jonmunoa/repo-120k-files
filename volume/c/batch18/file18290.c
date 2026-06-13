// fichero 18290 -- macros y constantes
#define LIMITE_18290 18390
#define FACTOR_18290 1

int aplicar_limite18290(int valor) {
    if (valor > LIMITE_18290) return LIMITE_18290;
    return valor * FACTOR_18290;
}
