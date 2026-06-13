// fichero 34702 -- macros y constantes
#define LIMITE_34702 34802
#define FACTOR_34702 3

int aplicar_limite34702(int valor) {
    if (valor > LIMITE_34702) return LIMITE_34702;
    return valor * FACTOR_34702;
}
