// fichero 54010 -- macros y constantes
#define LIMITE_54010 54110
#define FACTOR_54010 1

int aplicar_limite54010(int valor) {
    if (valor > LIMITE_54010) return LIMITE_54010;
    return valor * FACTOR_54010;
}
