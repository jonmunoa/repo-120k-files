// fichero 3030 -- macros y constantes
#define LIMITE_3030 3130
#define FACTOR_3030 1

int aplicar_limite3030(int valor) {
    if (valor > LIMITE_3030) return LIMITE_3030;
    return valor * FACTOR_3030;
}
