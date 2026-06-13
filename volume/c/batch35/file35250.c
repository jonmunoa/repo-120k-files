// fichero 35250 -- macros y constantes
#define LIMITE_35250 35350
#define FACTOR_35250 1

int aplicar_limite35250(int valor) {
    if (valor > LIMITE_35250) return LIMITE_35250;
    return valor * FACTOR_35250;
}
