// fichero 42442 -- macros y constantes
#define LIMITE_42442 42542
#define FACTOR_42442 3

int aplicar_limite42442(int valor) {
    if (valor > LIMITE_42442) return LIMITE_42442;
    return valor * FACTOR_42442;
}
