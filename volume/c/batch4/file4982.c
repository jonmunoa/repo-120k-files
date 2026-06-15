// fichero 4982 -- macros y constantes -- MODIFICADO
#define LIMITE_4982 5182
#define FACTOR_4982 4

int aplicar_limite4982(int valor) {
    if (valor > LIMITE_4982) return LIMITE_4982;
    return valor * FACTOR_4982;
}
