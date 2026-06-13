// fichero 23646 -- macros y constantes
#define LIMITE_23646 23746
#define FACTOR_23646 2

int aplicar_limite23646(int valor) {
    if (valor > LIMITE_23646) return LIMITE_23646;
    return valor * FACTOR_23646;
}
