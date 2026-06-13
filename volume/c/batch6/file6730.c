// fichero 6730 -- macros y constantes
#define LIMITE_6730 6830
#define FACTOR_6730 1

int aplicar_limite6730(int valor) {
    if (valor > LIMITE_6730) return LIMITE_6730;
    return valor * FACTOR_6730;
}
