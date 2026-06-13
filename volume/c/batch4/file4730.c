// fichero 4730 -- macros y constantes
#define LIMITE_4730 4830
#define FACTOR_4730 1

int aplicar_limite4730(int valor) {
    if (valor > LIMITE_4730) return LIMITE_4730;
    return valor * FACTOR_4730;
}
