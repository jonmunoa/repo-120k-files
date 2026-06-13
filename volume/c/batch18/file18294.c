// fichero 18294 -- macros y constantes
#define LIMITE_18294 18394
#define FACTOR_18294 5

int aplicar_limite18294(int valor) {
    if (valor > LIMITE_18294) return LIMITE_18294;
    return valor * FACTOR_18294;
}
