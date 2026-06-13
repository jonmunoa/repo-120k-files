// fichero 6646 -- macros y constantes
#define LIMITE_6646 6746
#define FACTOR_6646 2

int aplicar_limite6646(int valor) {
    if (valor > LIMITE_6646) return LIMITE_6646;
    return valor * FACTOR_6646;
}
