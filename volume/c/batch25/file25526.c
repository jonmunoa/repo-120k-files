// fichero 25526 -- macros y constantes
#define LIMITE_25526 25626
#define FACTOR_25526 2

int aplicar_limite25526(int valor) {
    if (valor > LIMITE_25526) return LIMITE_25526;
    return valor * FACTOR_25526;
}
