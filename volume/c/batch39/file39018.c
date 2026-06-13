// fichero 39018 -- macros y constantes
#define LIMITE_39018 39118
#define FACTOR_39018 4

int aplicar_limite39018(int valor) {
    if (valor > LIMITE_39018) return LIMITE_39018;
    return valor * FACTOR_39018;
}
