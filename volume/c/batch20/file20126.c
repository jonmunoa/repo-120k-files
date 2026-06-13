// fichero 20126 -- macros y constantes
#define LIMITE_20126 20226
#define FACTOR_20126 2

int aplicar_limite20126(int valor) {
    if (valor > LIMITE_20126) return LIMITE_20126;
    return valor * FACTOR_20126;
}
