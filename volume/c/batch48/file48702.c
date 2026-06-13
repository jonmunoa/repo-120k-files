// fichero 48702 -- macros y constantes
#define LIMITE_48702 48802
#define FACTOR_48702 3

int aplicar_limite48702(int valor) {
    if (valor > LIMITE_48702) return LIMITE_48702;
    return valor * FACTOR_48702;
}
