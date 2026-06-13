// fichero 40294 -- macros y constantes
#define LIMITE_40294 40394
#define FACTOR_40294 5

int aplicar_limite40294(int valor) {
    if (valor > LIMITE_40294) return LIMITE_40294;
    return valor * FACTOR_40294;
}
