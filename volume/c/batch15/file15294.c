// fichero 15294 -- macros y constantes
#define LIMITE_15294 15394
#define FACTOR_15294 5

int aplicar_limite15294(int valor) {
    if (valor > LIMITE_15294) return LIMITE_15294;
    return valor * FACTOR_15294;
}
