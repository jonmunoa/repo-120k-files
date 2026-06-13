// fichero 48442 -- macros y constantes
#define LIMITE_48442 48542
#define FACTOR_48442 3

int aplicar_limite48442(int valor) {
    if (valor > LIMITE_48442) return LIMITE_48442;
    return valor * FACTOR_48442;
}
