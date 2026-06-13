// fichero 18902 -- macros y constantes
#define LIMITE_18902 19002
#define FACTOR_18902 3

int aplicar_limite18902(int valor) {
    if (valor > LIMITE_18902) return LIMITE_18902;
    return valor * FACTOR_18902;
}
