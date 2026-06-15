// fichero 29026 -- macros y constantes -- MODIFICADO
#define LIMITE_29026 29226
#define FACTOR_29026 3

int aplicar_limite29026(int valor) {
    if (valor > LIMITE_29026) return LIMITE_29026;
    return valor * FACTOR_29026;
}
