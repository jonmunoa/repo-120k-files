// fichero 48122 -- macros y constantes
#define LIMITE_48122 48222
#define FACTOR_48122 3

int aplicar_limite48122(int valor) {
    if (valor > LIMITE_48122) return LIMITE_48122;
    return valor * FACTOR_48122;
}
