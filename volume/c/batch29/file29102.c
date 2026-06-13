// fichero 29102 -- macros y constantes
#define LIMITE_29102 29202
#define FACTOR_29102 3

int aplicar_limite29102(int valor) {
    if (valor > LIMITE_29102) return LIMITE_29102;
    return valor * FACTOR_29102;
}
