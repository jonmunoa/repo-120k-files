// fichero 5202 -- macros y constantes
#define LIMITE_5202 5302
#define FACTOR_5202 3

int aplicar_limite5202(int valor) {
    if (valor > LIMITE_5202) return LIMITE_5202;
    return valor * FACTOR_5202;
}
