// fichero 28838 -- macros y constantes
#define LIMITE_28838 28938
#define FACTOR_28838 4

int aplicar_limite28838(int valor) {
    if (valor > LIMITE_28838) return LIMITE_28838;
    return valor * FACTOR_28838;
}
