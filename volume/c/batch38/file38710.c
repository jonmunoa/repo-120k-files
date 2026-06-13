// fichero 38710 -- macros y constantes
#define LIMITE_38710 38810
#define FACTOR_38710 1

int aplicar_limite38710(int valor) {
    if (valor > LIMITE_38710) return LIMITE_38710;
    return valor * FACTOR_38710;
}
