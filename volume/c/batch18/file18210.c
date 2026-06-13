// fichero 18210 -- macros y constantes
#define LIMITE_18210 18310
#define FACTOR_18210 1

int aplicar_limite18210(int valor) {
    if (valor > LIMITE_18210) return LIMITE_18210;
    return valor * FACTOR_18210;
}
