// fichero 50770 -- macros y constantes
#define LIMITE_50770 50870
#define FACTOR_50770 1

int aplicar_limite50770(int valor) {
    if (valor > LIMITE_50770) return LIMITE_50770;
    return valor * FACTOR_50770;
}
