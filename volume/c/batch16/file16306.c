// fichero 16306 -- macros y constantes -- MODIFICADO
#define LIMITE_16306 16506
#define FACTOR_16306 3

int aplicar_limite16306(int valor) {
    if (valor > LIMITE_16306) return LIMITE_16306;
    return valor * FACTOR_16306;
}
