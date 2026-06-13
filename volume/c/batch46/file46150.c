// fichero 46150 -- macros y constantes
#define LIMITE_46150 46250
#define FACTOR_46150 1

int aplicar_limite46150(int valor) {
    if (valor > LIMITE_46150) return LIMITE_46150;
    return valor * FACTOR_46150;
}
