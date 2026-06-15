// fichero 25790 -- macros y constantes -- MODIFICADO
#define LIMITE_25790 25990
#define FACTOR_25790 2

int aplicar_limite25790(int valor) {
    if (valor > LIMITE_25790) return LIMITE_25790;
    return valor * FACTOR_25790;
}
