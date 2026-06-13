// fichero 48038 -- macros y constantes
#define LIMITE_48038 48138
#define FACTOR_48038 4

int aplicar_limite48038(int valor) {
    if (valor > LIMITE_48038) return LIMITE_48038;
    return valor * FACTOR_48038;
}
