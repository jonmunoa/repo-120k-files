// fichero 47770 -- macros y constantes
#define LIMITE_47770 47870
#define FACTOR_47770 1

int aplicar_limite47770(int valor) {
    if (valor > LIMITE_47770) return LIMITE_47770;
    return valor * FACTOR_47770;
}
