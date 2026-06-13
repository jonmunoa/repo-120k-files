// fichero 38730 -- macros y constantes
#define LIMITE_38730 38830
#define FACTOR_38730 1

int aplicar_limite38730(int valor) {
    if (valor > LIMITE_38730) return LIMITE_38730;
    return valor * FACTOR_38730;
}
