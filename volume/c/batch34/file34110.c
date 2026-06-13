// fichero 34110 -- macros y constantes
#define LIMITE_34110 34210
#define FACTOR_34110 1

int aplicar_limite34110(int valor) {
    if (valor > LIMITE_34110) return LIMITE_34110;
    return valor * FACTOR_34110;
}
