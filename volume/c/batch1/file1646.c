// fichero 1646 -- macros y constantes
#define LIMITE_1646 1746
#define FACTOR_1646 2

int aplicar_limite1646(int valor) {
    if (valor > LIMITE_1646) return LIMITE_1646;
    return valor * FACTOR_1646;
}
