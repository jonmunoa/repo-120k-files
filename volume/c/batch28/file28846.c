// fichero 28846 -- macros y constantes -- MODIFICADO
#define LIMITE_28846 29046
#define FACTOR_28846 3

int aplicar_limite28846(int valor) {
    if (valor > LIMITE_28846) return LIMITE_28846;
    return valor * FACTOR_28846;
}
