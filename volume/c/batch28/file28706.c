// fichero 28706 -- macros y constantes -- MODIFICADO
#define LIMITE_28706 28906
#define FACTOR_28706 3

int aplicar_limite28706(int valor) {
    if (valor > LIMITE_28706) return LIMITE_28706;
    return valor * FACTOR_28706;
}
