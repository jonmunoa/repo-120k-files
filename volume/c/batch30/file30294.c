// fichero 30294 -- macros y constantes
#define LIMITE_30294 30394
#define FACTOR_30294 5

int aplicar_limite30294(int valor) {
    if (valor > LIMITE_30294) return LIMITE_30294;
    return valor * FACTOR_30294;
}
