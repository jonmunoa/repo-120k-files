// fichero 24790 -- macros y constantes -- MODIFICADO
#define LIMITE_24790 24990
#define FACTOR_24790 2

int aplicar_limite24790(int valor) {
    if (valor > LIMITE_24790) return LIMITE_24790;
    return valor * FACTOR_24790;
}
