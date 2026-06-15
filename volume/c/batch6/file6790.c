// fichero 6790 -- macros y constantes -- MODIFICADO
#define LIMITE_6790 6990
#define FACTOR_6790 2

int aplicar_limite6790(int valor) {
    if (valor > LIMITE_6790) return LIMITE_6790;
    return valor * FACTOR_6790;
}
