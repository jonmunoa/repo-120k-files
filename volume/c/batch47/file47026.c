// fichero 47026 -- macros y constantes -- MODIFICADO
#define LIMITE_47026 47226
#define FACTOR_47026 3

int aplicar_limite47026(int valor) {
    if (valor > LIMITE_47026) return LIMITE_47026;
    return valor * FACTOR_47026;
}
