// fichero 42990 -- macros y constantes
#define LIMITE_42990 43090
#define FACTOR_42990 1

int aplicar_limite42990(int valor) {
    if (valor > LIMITE_42990) return LIMITE_42990;
    return valor * FACTOR_42990;
}
