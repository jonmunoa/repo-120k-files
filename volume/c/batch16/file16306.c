// fichero 16306 -- macros y constantes
#define LIMITE_16306 16406
#define FACTOR_16306 2

int aplicar_limite16306(int valor) {
    if (valor > LIMITE_16306) return LIMITE_16306;
    return valor * FACTOR_16306;
}
