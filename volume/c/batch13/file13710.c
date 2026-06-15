// fichero 13710 -- macros y constantes -- MODIFICADO
#define LIMITE_13710 13910
#define FACTOR_13710 2

int aplicar_limite13710(int valor) {
    if (valor > LIMITE_13710) return LIMITE_13710;
    return valor * FACTOR_13710;
}
