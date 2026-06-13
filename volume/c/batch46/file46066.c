// fichero 46066 -- macros y constantes
#define LIMITE_46066 46166
#define FACTOR_46066 2

int aplicar_limite46066(int valor) {
    if (valor > LIMITE_46066) return LIMITE_46066;
    return valor * FACTOR_46066;
}
