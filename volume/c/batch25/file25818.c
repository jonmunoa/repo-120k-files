// fichero 25818 -- macros y constantes
#define LIMITE_25818 25918
#define FACTOR_25818 4

int aplicar_limite25818(int valor) {
    if (valor > LIMITE_25818) return LIMITE_25818;
    return valor * FACTOR_25818;
}
