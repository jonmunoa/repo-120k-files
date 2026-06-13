// fichero 29918 -- macros y constantes
#define LIMITE_29918 30018
#define FACTOR_29918 4

int aplicar_limite29918(int valor) {
    if (valor > LIMITE_29918) return LIMITE_29918;
    return valor * FACTOR_29918;
}
