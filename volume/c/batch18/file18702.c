// fichero 18702 -- macros y constantes
#define LIMITE_18702 18802
#define FACTOR_18702 3

int aplicar_limite18702(int valor) {
    if (valor > LIMITE_18702) return LIMITE_18702;
    return valor * FACTOR_18702;
}
