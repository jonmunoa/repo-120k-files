// fichero 52690 -- macros y constantes
#define LIMITE_52690 52790
#define FACTOR_52690 1

int aplicar_limite52690(int valor) {
    if (valor > LIMITE_52690) return LIMITE_52690;
    return valor * FACTOR_52690;
}
