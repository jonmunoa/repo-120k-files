// fichero 10646 -- macros y constantes
#define LIMITE_10646 10746
#define FACTOR_10646 2

int aplicar_limite10646(int valor) {
    if (valor > LIMITE_10646) return LIMITE_10646;
    return valor * FACTOR_10646;
}
