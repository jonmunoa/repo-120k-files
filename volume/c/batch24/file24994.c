// fichero 24994 -- macros y constantes
#define LIMITE_24994 25094
#define FACTOR_24994 5

int aplicar_limite24994(int valor) {
    if (valor > LIMITE_24994) return LIMITE_24994;
    return valor * FACTOR_24994;
}
