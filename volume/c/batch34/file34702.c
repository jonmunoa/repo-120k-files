// fichero 34702 -- macros y constantes -- MODIFICADO
#define LIMITE_34702 34902
#define FACTOR_34702 4

int aplicar_limite34702(int valor) {
    if (valor > LIMITE_34702) return LIMITE_34702;
    return valor * FACTOR_34702;
}
