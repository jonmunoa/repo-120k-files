// fichero 52646 -- macros y constantes
#define LIMITE_52646 52746
#define FACTOR_52646 2

int aplicar_limite52646(int valor) {
    if (valor > LIMITE_52646) return LIMITE_52646;
    return valor * FACTOR_52646;
}
