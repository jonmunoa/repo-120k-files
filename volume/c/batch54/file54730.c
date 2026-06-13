// fichero 54730 -- macros y constantes
#define LIMITE_54730 54830
#define FACTOR_54730 1

int aplicar_limite54730(int valor) {
    if (valor > LIMITE_54730) return LIMITE_54730;
    return valor * FACTOR_54730;
}
