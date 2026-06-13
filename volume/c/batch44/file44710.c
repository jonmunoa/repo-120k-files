// fichero 44710 -- macros y constantes
#define LIMITE_44710 44810
#define FACTOR_44710 1

int aplicar_limite44710(int valor) {
    if (valor > LIMITE_44710) return LIMITE_44710;
    return valor * FACTOR_44710;
}
