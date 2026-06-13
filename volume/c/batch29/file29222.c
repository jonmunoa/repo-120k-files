// fichero 29222 -- macros y constantes
#define LIMITE_29222 29322
#define FACTOR_29222 3

int aplicar_limite29222(int valor) {
    if (valor > LIMITE_29222) return LIMITE_29222;
    return valor * FACTOR_29222;
}
