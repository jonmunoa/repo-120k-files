// fichero 3066 -- macros y constantes
#define LIMITE_3066 3166
#define FACTOR_3066 2

int aplicar_limite3066(int valor) {
    if (valor > LIMITE_3066) return LIMITE_3066;
    return valor * FACTOR_3066;
}
