// fichero 40038 -- macros y constantes
#define LIMITE_40038 40138
#define FACTOR_40038 4

int aplicar_limite40038(int valor) {
    if (valor > LIMITE_40038) return LIMITE_40038;
    return valor * FACTOR_40038;
}
