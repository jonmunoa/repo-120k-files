// fichero 12990 -- macros y constantes
#define LIMITE_12990 13090
#define FACTOR_12990 1

int aplicar_limite12990(int valor) {
    if (valor > LIMITE_12990) return LIMITE_12990;
    return valor * FACTOR_12990;
}
