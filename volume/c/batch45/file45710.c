// fichero 45710 -- macros y constantes -- MODIFICADO
#define LIMITE_45710 45910
#define FACTOR_45710 2

int aplicar_limite45710(int valor) {
    if (valor > LIMITE_45710) return LIMITE_45710;
    return valor * FACTOR_45710;
}
