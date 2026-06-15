// fichero 20134 -- macros y constantes -- MODIFICADO
#define LIMITE_20134 20334
#define FACTOR_20134 6

int aplicar_limite20134(int valor) {
    if (valor > LIMITE_20134) return LIMITE_20134;
    return valor * FACTOR_20134;
}
