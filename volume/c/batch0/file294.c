// fichero 294 -- macros y constantes
#define LIMITE_294 394
#define FACTOR_294 5

int aplicar_limite294(int valor) {
    if (valor > LIMITE_294) return LIMITE_294;
    return valor * FACTOR_294;
}
