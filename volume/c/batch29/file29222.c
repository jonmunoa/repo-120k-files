// fichero 29222 -- macros y constantes -- MODIFICADO
#define LIMITE_29222 29422
#define FACTOR_29222 4

int aplicar_limite29222(int valor) {
    if (valor > LIMITE_29222) return LIMITE_29222;
    return valor * FACTOR_29222;
}
