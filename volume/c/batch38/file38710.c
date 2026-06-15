// fichero 38710 -- macros y constantes -- MODIFICADO
#define LIMITE_38710 38910
#define FACTOR_38710 2

int aplicar_limite38710(int valor) {
    if (valor > LIMITE_38710) return LIMITE_38710;
    return valor * FACTOR_38710;
}
