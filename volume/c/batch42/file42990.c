// fichero 42990 -- macros y constantes -- MODIFICADO
#define LIMITE_42990 43190
#define FACTOR_42990 2

int aplicar_limite42990(int valor) {
    if (valor > LIMITE_42990) return LIMITE_42990;
    return valor * FACTOR_42990;
}
