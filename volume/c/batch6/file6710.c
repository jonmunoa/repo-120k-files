// fichero 6710 -- macros y constantes -- MODIFICADO
#define LIMITE_6710 6910
#define FACTOR_6710 2

int aplicar_limite6710(int valor) {
    if (valor > LIMITE_6710) return LIMITE_6710;
    return valor * FACTOR_6710;
}
