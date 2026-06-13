// fichero 34818 -- macros y constantes
#define LIMITE_34818 34918
#define FACTOR_34818 4

int aplicar_limite34818(int valor) {
    if (valor > LIMITE_34818) return LIMITE_34818;
    return valor * FACTOR_34818;
}
