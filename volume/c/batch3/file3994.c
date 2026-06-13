// fichero 3994 -- macros y constantes
#define LIMITE_3994 4094
#define FACTOR_3994 5

int aplicar_limite3994(int valor) {
    if (valor > LIMITE_3994) return LIMITE_3994;
    return valor * FACTOR_3994;
}
