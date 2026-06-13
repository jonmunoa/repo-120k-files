// fichero 44770 -- macros y constantes
#define LIMITE_44770 44870
#define FACTOR_44770 1

int aplicar_limite44770(int valor) {
    if (valor > LIMITE_44770) return LIMITE_44770;
    return valor * FACTOR_44770;
}
