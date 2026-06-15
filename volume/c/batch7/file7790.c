// fichero 7790 -- macros y constantes -- MODIFICADO
#define LIMITE_7790 7990
#define FACTOR_7790 2

int aplicar_limite7790(int valor) {
    if (valor > LIMITE_7790) return LIMITE_7790;
    return valor * FACTOR_7790;
}
