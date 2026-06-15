// fichero 35658 -- macros y constantes -- MODIFICADO
#define LIMITE_35658 35858
#define FACTOR_35658 5

int aplicar_limite35658(int valor) {
    if (valor > LIMITE_35658) return LIMITE_35658;
    return valor * FACTOR_35658;
}
