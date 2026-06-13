// fichero 35294 -- macros y constantes
#define LIMITE_35294 35394
#define FACTOR_35294 5

int aplicar_limite35294(int valor) {
    if (valor > LIMITE_35294) return LIMITE_35294;
    return valor * FACTOR_35294;
}
