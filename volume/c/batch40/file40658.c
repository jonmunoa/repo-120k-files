// fichero 40658 -- macros y constantes -- MODIFICADO
#define LIMITE_40658 40858
#define FACTOR_40658 5

int aplicar_limite40658(int valor) {
    if (valor > LIMITE_40658) return LIMITE_40658;
    return valor * FACTOR_40658;
}
