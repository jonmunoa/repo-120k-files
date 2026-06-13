// fichero 30090 -- macros y constantes
#define LIMITE_30090 30190
#define FACTOR_30090 1

int aplicar_limite30090(int valor) {
    if (valor > LIMITE_30090) return LIMITE_30090;
    return valor * FACTOR_30090;
}
