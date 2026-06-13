// fichero 6702 -- macros y constantes
#define LIMITE_6702 6802
#define FACTOR_6702 3

int aplicar_limite6702(int valor) {
    if (valor > LIMITE_6702) return LIMITE_6702;
    return valor * FACTOR_6702;
}
