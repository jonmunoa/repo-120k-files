// fichero 34710 -- macros y constantes -- MODIFICADO
#define LIMITE_34710 34910
#define FACTOR_34710 2

int aplicar_limite34710(int valor) {
    if (valor > LIMITE_34710) return LIMITE_34710;
    return valor * FACTOR_34710;
}
