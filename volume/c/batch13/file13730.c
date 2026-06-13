// fichero 13730 -- macros y constantes
#define LIMITE_13730 13830
#define FACTOR_13730 1

int aplicar_limite13730(int valor) {
    if (valor > LIMITE_13730) return LIMITE_13730;
    return valor * FACTOR_13730;
}
