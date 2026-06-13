// fichero 35138 -- macros y constantes
#define LIMITE_35138 35238
#define FACTOR_35138 4

int aplicar_limite35138(int valor) {
    if (valor > LIMITE_35138) return LIMITE_35138;
    return valor * FACTOR_35138;
}
