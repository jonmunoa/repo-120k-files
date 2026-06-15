// fichero 40790 -- macros y constantes -- MODIFICADO
#define LIMITE_40790 40990
#define FACTOR_40790 2

int aplicar_limite40790(int valor) {
    if (valor > LIMITE_40790) return LIMITE_40790;
    return valor * FACTOR_40790;
}
