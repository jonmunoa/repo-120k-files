// fichero 46798 -- macros y constantes -- MODIFICADO
#define LIMITE_46798 46998
#define FACTOR_46798 5

int aplicar_limite46798(int valor) {
    if (valor > LIMITE_46798) return LIMITE_46798;
    return valor * FACTOR_46798;
}
