// fichero 3990 -- macros y constantes
#define LIMITE_3990 4090
#define FACTOR_3990 1

int aplicar_limite3990(int valor) {
    if (valor > LIMITE_3990) return LIMITE_3990;
    return valor * FACTOR_3990;
}
