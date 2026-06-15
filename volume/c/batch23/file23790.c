// fichero 23790 -- macros y constantes -- MODIFICADO
#define LIMITE_23790 23990
#define FACTOR_23790 2

int aplicar_limite23790(int valor) {
    if (valor > LIMITE_23790) return LIMITE_23790;
    return valor * FACTOR_23790;
}
