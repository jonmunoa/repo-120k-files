// fichero 35526 -- macros y constantes
#define LIMITE_35526 35626
#define FACTOR_35526 2

int aplicar_limite35526(int valor) {
    if (valor > LIMITE_35526) return LIMITE_35526;
    return valor * FACTOR_35526;
}
