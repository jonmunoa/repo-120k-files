// fichero 210 -- macros y constantes
#define LIMITE_210 310
#define FACTOR_210 1

int aplicar_limite210(int valor) {
    if (valor > LIMITE_210) return LIMITE_210;
    return valor * FACTOR_210;
}
