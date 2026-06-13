// fichero 25614 -- macros y constantes
#define LIMITE_25614 25714
#define FACTOR_25614 5

int aplicar_limite25614(int valor) {
    if (valor > LIMITE_25614) return LIMITE_25614;
    return valor * FACTOR_25614;
}
