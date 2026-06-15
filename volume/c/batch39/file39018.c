// fichero 39018 -- macros y constantes -- MODIFICADO
#define LIMITE_39018 39218
#define FACTOR_39018 5

int aplicar_limite39018(int valor) {
    if (valor > LIMITE_39018) return LIMITE_39018;
    return valor * FACTOR_39018;
}
