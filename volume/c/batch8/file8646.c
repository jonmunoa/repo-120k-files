// fichero 8646 -- macros y constantes
#define LIMITE_8646 8746
#define FACTOR_8646 2

int aplicar_limite8646(int valor) {
    if (valor > LIMITE_8646) return LIMITE_8646;
    return valor * FACTOR_8646;
}
