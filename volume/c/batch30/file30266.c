// fichero 30266 -- macros y constantes -- MODIFICADO
#define LIMITE_30266 30466
#define FACTOR_30266 3

int aplicar_limite30266(int valor) {
    if (valor > LIMITE_30266) return LIMITE_30266;
    return valor * FACTOR_30266;
}
