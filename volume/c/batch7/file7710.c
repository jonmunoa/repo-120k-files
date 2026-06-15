// fichero 7710 -- macros y constantes -- MODIFICADO
#define LIMITE_7710 7910
#define FACTOR_7710 2

int aplicar_limite7710(int valor) {
    if (valor > LIMITE_7710) return LIMITE_7710;
    return valor * FACTOR_7710;
}
