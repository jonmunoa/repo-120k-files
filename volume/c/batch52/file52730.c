// fichero 52730 -- macros y constantes
#define LIMITE_52730 52830
#define FACTOR_52730 1

int aplicar_limite52730(int valor) {
    if (valor > LIMITE_52730) return LIMITE_52730;
    return valor * FACTOR_52730;
}
