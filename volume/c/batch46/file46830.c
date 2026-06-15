// fichero 46830 -- macros y constantes -- MODIFICADO
#define LIMITE_46830 47030
#define FACTOR_46830 2

int aplicar_limite46830(int valor) {
    if (valor > LIMITE_46830) return LIMITE_46830;
    return valor * FACTOR_46830;
}
