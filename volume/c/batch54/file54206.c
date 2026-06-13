// fichero 54206 -- macros y constantes
#define LIMITE_54206 54306
#define FACTOR_54206 2

int aplicar_limite54206(int valor) {
    if (valor > LIMITE_54206) return LIMITE_54206;
    return valor * FACTOR_54206;
}
