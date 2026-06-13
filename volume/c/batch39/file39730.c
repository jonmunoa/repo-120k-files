// fichero 39730 -- macros y constantes
#define LIMITE_39730 39830
#define FACTOR_39730 1

int aplicar_limite39730(int valor) {
    if (valor > LIMITE_39730) return LIMITE_39730;
    return valor * FACTOR_39730;
}
