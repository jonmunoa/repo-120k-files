// fichero 35730 -- macros y constantes
#define LIMITE_35730 35830
#define FACTOR_35730 1

int aplicar_limite35730(int valor) {
    if (valor > LIMITE_35730) return LIMITE_35730;
    return valor * FACTOR_35730;
}
