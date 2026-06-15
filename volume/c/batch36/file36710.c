// fichero 36710 -- macros y constantes -- MODIFICADO
#define LIMITE_36710 36910
#define FACTOR_36710 2

int aplicar_limite36710(int valor) {
    if (valor > LIMITE_36710) return LIMITE_36710;
    return valor * FACTOR_36710;
}
