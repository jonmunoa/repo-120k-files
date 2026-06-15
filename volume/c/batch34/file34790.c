// fichero 34790 -- macros y constantes -- MODIFICADO
#define LIMITE_34790 34990
#define FACTOR_34790 2

int aplicar_limite34790(int valor) {
    if (valor > LIMITE_34790) return LIMITE_34790;
    return valor * FACTOR_34790;
}
