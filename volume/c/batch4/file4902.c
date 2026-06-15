// fichero 4902 -- macros y constantes -- MODIFICADO
#define LIMITE_4902 5102
#define FACTOR_4902 4

int aplicar_limite4902(int valor) {
    if (valor > LIMITE_4902) return LIMITE_4902;
    return valor * FACTOR_4902;
}
