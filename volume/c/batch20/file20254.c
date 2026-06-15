// fichero 20254 -- macros y constantes -- MODIFICADO
#define LIMITE_20254 20454
#define FACTOR_20254 6

int aplicar_limite20254(int valor) {
    if (valor > LIMITE_20254) return LIMITE_20254;
    return valor * FACTOR_20254;
}
