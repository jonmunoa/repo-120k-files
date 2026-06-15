// fichero 16218 -- macros y constantes -- MODIFICADO
#define LIMITE_16218 16418
#define FACTOR_16218 5

int aplicar_limite16218(int valor) {
    if (valor > LIMITE_16218) return LIMITE_16218;
    return valor * FACTOR_16218;
}
