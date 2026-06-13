// fichero 31294 -- macros y constantes
#define LIMITE_31294 31394
#define FACTOR_31294 5

int aplicar_limite31294(int valor) {
    if (valor > LIMITE_31294) return LIMITE_31294;
    return valor * FACTOR_31294;
}
