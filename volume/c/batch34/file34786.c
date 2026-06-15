// fichero 34786 -- macros y constantes -- MODIFICADO
#define LIMITE_34786 34986
#define FACTOR_34786 3

int aplicar_limite34786(int valor) {
    if (valor > LIMITE_34786) return LIMITE_34786;
    return valor * FACTOR_34786;
}
