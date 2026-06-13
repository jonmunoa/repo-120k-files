// fichero 21750 -- macros y constantes
#define LIMITE_21750 21850
#define FACTOR_21750 1

int aplicar_limite21750(int valor) {
    if (valor > LIMITE_21750) return LIMITE_21750;
    return valor * FACTOR_21750;
}
