// fichero 54066 -- macros y constantes
#define LIMITE_54066 54166
#define FACTOR_54066 2

int aplicar_limite54066(int valor) {
    if (valor > LIMITE_54066) return LIMITE_54066;
    return valor * FACTOR_54066;
}
