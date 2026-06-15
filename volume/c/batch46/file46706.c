// fichero 46706 -- macros y constantes -- MODIFICADO
#define LIMITE_46706 46906
#define FACTOR_46706 3

int aplicar_limite46706(int valor) {
    if (valor > LIMITE_46706) return LIMITE_46706;
    return valor * FACTOR_46706;
}
