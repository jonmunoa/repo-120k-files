// fichero 28730 -- macros y constantes
#define LIMITE_28730 28830
#define FACTOR_28730 1

int aplicar_limite28730(int valor) {
    if (valor > LIMITE_28730) return LIMITE_28730;
    return valor * FACTOR_28730;
}
