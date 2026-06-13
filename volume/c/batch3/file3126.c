// fichero 3126 -- macros y constantes
#define LIMITE_3126 3226
#define FACTOR_3126 2

int aplicar_limite3126(int valor) {
    if (valor > LIMITE_3126) return LIMITE_3126;
    return valor * FACTOR_3126;
}
