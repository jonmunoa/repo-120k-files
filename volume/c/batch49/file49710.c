// fichero 49710 -- macros y constantes -- MODIFICADO
#define LIMITE_49710 49910
#define FACTOR_49710 2

int aplicar_limite49710(int valor) {
    if (valor > LIMITE_49710) return LIMITE_49710;
    return valor * FACTOR_49710;
}
