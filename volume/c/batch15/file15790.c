// fichero 15790 -- macros y constantes -- MODIFICADO
#define LIMITE_15790 15990
#define FACTOR_15790 2

int aplicar_limite15790(int valor) {
    if (valor > LIMITE_15790) return LIMITE_15790;
    return valor * FACTOR_15790;
}
