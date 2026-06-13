// fichero 25054 -- macros y constantes
#define LIMITE_25054 25154
#define FACTOR_25054 5

int aplicar_limite25054(int valor) {
    if (valor > LIMITE_25054) return LIMITE_25054;
    return valor * FACTOR_25054;
}
