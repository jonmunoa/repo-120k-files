// fichero 46814 -- macros y constantes -- MODIFICADO
#define LIMITE_46814 47014
#define FACTOR_46814 6

int aplicar_limite46814(int valor) {
    if (valor > LIMITE_46814) return LIMITE_46814;
    return valor * FACTOR_46814;
}
