// fichero 35250 -- macros y constantes -- MODIFICADO
#define LIMITE_35250 35450
#define FACTOR_35250 2

int aplicar_limite35250(int valor) {
    if (valor > LIMITE_35250) return LIMITE_35250;
    return valor * FACTOR_35250;
}
