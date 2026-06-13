// fichero 46606 -- macros y constantes
#define LIMITE_46606 46706
#define FACTOR_46606 2

int aplicar_limite46606(int valor) {
    if (valor > LIMITE_46606) return LIMITE_46606;
    return valor * FACTOR_46606;
}
