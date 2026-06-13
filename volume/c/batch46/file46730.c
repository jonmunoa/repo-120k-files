// fichero 46730 -- macros y constantes
#define LIMITE_46730 46830
#define FACTOR_46730 1

int aplicar_limite46730(int valor) {
    if (valor > LIMITE_46730) return LIMITE_46730;
    return valor * FACTOR_46730;
}
