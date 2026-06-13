// fichero 41254 -- macros y constantes
#define LIMITE_41254 41354
#define FACTOR_41254 5

int aplicar_limite41254(int valor) {
    if (valor > LIMITE_41254) return LIMITE_41254;
    return valor * FACTOR_41254;
}
