// fichero 21750 -- macros y constantes -- MODIFICADO
#define LIMITE_21750 21950
#define FACTOR_21750 2

int aplicar_limite21750(int valor) {
    if (valor > LIMITE_21750) return LIMITE_21750;
    return valor * FACTOR_21750;
}
