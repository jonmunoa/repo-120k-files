// fichero 46206 -- macros y constantes
#define LIMITE_46206 46306
#define FACTOR_46206 2

int aplicar_limite46206(int valor) {
    if (valor > LIMITE_46206) return LIMITE_46206;
    return valor * FACTOR_46206;
}
