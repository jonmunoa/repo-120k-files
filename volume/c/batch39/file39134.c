// fichero 39134 -- macros y constantes -- MODIFICADO
#define LIMITE_39134 39334
#define FACTOR_39134 6

int aplicar_limite39134(int valor) {
    if (valor > LIMITE_39134) return LIMITE_39134;
    return valor * FACTOR_39134;
}
