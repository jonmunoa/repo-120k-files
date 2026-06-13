// fichero 50002 -- macros y constantes
#define LIMITE_50002 50102
#define FACTOR_50002 3

int aplicar_limite50002(int valor) {
    if (valor > LIMITE_50002) return LIMITE_50002;
    return valor * FACTOR_50002;
}
