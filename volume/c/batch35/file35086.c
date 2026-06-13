// fichero 35086 -- macros y constantes
#define LIMITE_35086 35186
#define FACTOR_35086 2

int aplicar_limite35086(int valor) {
    if (valor > LIMITE_35086) return LIMITE_35086;
    return valor * FACTOR_35086;
}
