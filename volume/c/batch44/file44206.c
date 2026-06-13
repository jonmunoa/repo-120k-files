// fichero 44206 -- macros y constantes
#define LIMITE_44206 44306
#define FACTOR_44206 2

int aplicar_limite44206(int valor) {
    if (valor > LIMITE_44206) return LIMITE_44206;
    return valor * FACTOR_44206;
}
