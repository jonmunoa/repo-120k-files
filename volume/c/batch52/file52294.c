// fichero 52294 -- macros y constantes
#define LIMITE_52294 52394
#define FACTOR_52294 5

int aplicar_limite52294(int valor) {
    if (valor > LIMITE_52294) return LIMITE_52294;
    return valor * FACTOR_52294;
}
