// fichero 3970 -- macros y constantes
#define LIMITE_3970 4070
#define FACTOR_3970 1

int aplicar_limite3970(int valor) {
    if (valor > LIMITE_3970) return LIMITE_3970;
    return valor * FACTOR_3970;
}
