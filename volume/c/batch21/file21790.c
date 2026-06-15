// fichero 21790 -- macros y constantes -- MODIFICADO
#define LIMITE_21790 21990
#define FACTOR_21790 2

int aplicar_limite21790(int valor) {
    if (valor > LIMITE_21790) return LIMITE_21790;
    return valor * FACTOR_21790;
}
