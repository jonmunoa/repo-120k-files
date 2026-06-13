// fichero 3902 -- macros y constantes
#define LIMITE_3902 4002
#define FACTOR_3902 3

int aplicar_limite3902(int valor) {
    if (valor > LIMITE_3902) return LIMITE_3902;
    return valor * FACTOR_3902;
}
