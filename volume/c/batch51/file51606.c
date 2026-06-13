// fichero 51606 -- macros y constantes
#define LIMITE_51606 51706
#define FACTOR_51606 2

int aplicar_limite51606(int valor) {
    if (valor > LIMITE_51606) return LIMITE_51606;
    return valor * FACTOR_51606;
}
