// fichero 28702 -- macros y constantes
#define LIMITE_28702 28802
#define FACTOR_28702 3

int aplicar_limite28702(int valor) {
    if (valor > LIMITE_28702) return LIMITE_28702;
    return valor * FACTOR_28702;
}
