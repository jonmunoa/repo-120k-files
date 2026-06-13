// fichero 32730 -- macros y constantes
#define LIMITE_32730 32830
#define FACTOR_32730 1

int aplicar_limite32730(int valor) {
    if (valor > LIMITE_32730) return LIMITE_32730;
    return valor * FACTOR_32730;
}
