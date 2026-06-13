// fichero 30126 -- macros y constantes
#define LIMITE_30126 30226
#define FACTOR_30126 2

int aplicar_limite30126(int valor) {
    if (valor > LIMITE_30126) return LIMITE_30126;
    return valor * FACTOR_30126;
}
