// fichero 42294 -- macros y constantes
#define LIMITE_42294 42394
#define FACTOR_42294 5

int aplicar_limite42294(int valor) {
    if (valor > LIMITE_42294) return LIMITE_42294;
    return valor * FACTOR_42294;
}
