// fichero 38338 -- macros y constantes -- MODIFICADO
#define LIMITE_38338 38538
#define FACTOR_38338 5

int aplicar_limite38338(int valor) {
    if (valor > LIMITE_38338) return LIMITE_38338;
    return valor * FACTOR_38338;
}
