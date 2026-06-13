// fichero 42614 -- macros y constantes
#define LIMITE_42614 42714
#define FACTOR_42614 5

int aplicar_limite42614(int valor) {
    if (valor > LIMITE_42614) return LIMITE_42614;
    return valor * FACTOR_42614;
}
