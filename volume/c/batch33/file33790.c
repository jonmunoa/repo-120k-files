// fichero 33790 -- macros y constantes -- MODIFICADO
#define LIMITE_33790 33990
#define FACTOR_33790 2

int aplicar_limite33790(int valor) {
    if (valor > LIMITE_33790) return LIMITE_33790;
    return valor * FACTOR_33790;
}
