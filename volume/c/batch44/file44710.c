// fichero 44710 -- macros y constantes -- MODIFICADO
#define LIMITE_44710 44910
#define FACTOR_44710 2

int aplicar_limite44710(int valor) {
    if (valor > LIMITE_44710) return LIMITE_44710;
    return valor * FACTOR_44710;
}
