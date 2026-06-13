// fichero 52710 -- macros y constantes
#define LIMITE_52710 52810
#define FACTOR_52710 1

int aplicar_limite52710(int valor) {
    if (valor > LIMITE_52710) return LIMITE_52710;
    return valor * FACTOR_52710;
}
