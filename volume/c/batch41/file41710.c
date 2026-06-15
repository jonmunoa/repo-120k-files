// fichero 41710 -- macros y constantes -- MODIFICADO
#define LIMITE_41710 41910
#define FACTOR_41710 2

int aplicar_limite41710(int valor) {
    if (valor > LIMITE_41710) return LIMITE_41710;
    return valor * FACTOR_41710;
}
