// fichero 28206 -- macros y constantes
#define LIMITE_28206 28306
#define FACTOR_28206 2

int aplicar_limite28206(int valor) {
    if (valor > LIMITE_28206) return LIMITE_28206;
    return valor * FACTOR_28206;
}
