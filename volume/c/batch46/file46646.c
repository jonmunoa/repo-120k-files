// fichero 46646 -- macros y constantes
#define LIMITE_46646 46746
#define FACTOR_46646 2

int aplicar_limite46646(int valor) {
    if (valor > LIMITE_46646) return LIMITE_46646;
    return valor * FACTOR_46646;
}
