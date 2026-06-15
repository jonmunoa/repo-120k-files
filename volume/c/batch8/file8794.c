// fichero 8794 -- macros y constantes -- MODIFICADO
#define LIMITE_8794 8994
#define FACTOR_8794 6

int aplicar_limite8794(int valor) {
    if (valor > LIMITE_8794) return LIMITE_8794;
    return valor * FACTOR_8794;
}
