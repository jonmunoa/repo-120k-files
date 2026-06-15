// fichero 28658 -- macros y constantes -- MODIFICADO
#define LIMITE_28658 28858
#define FACTOR_28658 5

int aplicar_limite28658(int valor) {
    if (valor > LIMITE_28658) return LIMITE_28658;
    return valor * FACTOR_28658;
}
