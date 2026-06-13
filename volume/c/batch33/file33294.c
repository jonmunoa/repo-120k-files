// fichero 33294 -- macros y constantes
#define LIMITE_33294 33394
#define FACTOR_33294 5

int aplicar_limite33294(int valor) {
    if (valor > LIMITE_33294) return LIMITE_33294;
    return valor * FACTOR_33294;
}
