// fichero 23770 -- macros y constantes
#define LIMITE_23770 23870
#define FACTOR_23770 1

int aplicar_limite23770(int valor) {
    if (valor > LIMITE_23770) return LIMITE_23770;
    return valor * FACTOR_23770;
}
