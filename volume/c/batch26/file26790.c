// fichero 26790 -- macros y constantes -- MODIFICADO
#define LIMITE_26790 26990
#define FACTOR_26790 2

int aplicar_limite26790(int valor) {
    if (valor > LIMITE_26790) return LIMITE_26790;
    return valor * FACTOR_26790;
}
