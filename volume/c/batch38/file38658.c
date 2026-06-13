// fichero 38658 -- macros y constantes
#define LIMITE_38658 38758
#define FACTOR_38658 4

int aplicar_limite38658(int valor) {
    if (valor > LIMITE_38658) return LIMITE_38658;
    return valor * FACTOR_38658;
}
