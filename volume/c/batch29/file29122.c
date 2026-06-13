// fichero 29122 -- macros y constantes
#define LIMITE_29122 29222
#define FACTOR_29122 3

int aplicar_limite29122(int valor) {
    if (valor > LIMITE_29122) return LIMITE_29122;
    return valor * FACTOR_29122;
}
