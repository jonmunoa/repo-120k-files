// fichero 25078 -- macros y constantes
#define LIMITE_25078 25178
#define FACTOR_25078 4

int aplicar_limite25078(int valor) {
    if (valor > LIMITE_25078) return LIMITE_25078;
    return valor * FACTOR_25078;
}
