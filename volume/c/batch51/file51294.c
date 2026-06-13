// fichero 51294 -- macros y constantes
#define LIMITE_51294 51394
#define FACTOR_51294 5

int aplicar_limite51294(int valor) {
    if (valor > LIMITE_51294) return LIMITE_51294;
    return valor * FACTOR_51294;
}
