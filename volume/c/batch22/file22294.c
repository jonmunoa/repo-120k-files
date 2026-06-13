// fichero 22294 -- macros y constantes
#define LIMITE_22294 22394
#define FACTOR_22294 5

int aplicar_limite22294(int valor) {
    if (valor > LIMITE_22294) return LIMITE_22294;
    return valor * FACTOR_22294;
}
