// fichero 32758 -- macros y constantes -- MODIFICADO
#define LIMITE_32758 32958
#define FACTOR_32758 5

int aplicar_limite32758(int valor) {
    if (valor > LIMITE_32758) return LIMITE_32758;
    return valor * FACTOR_32758;
}
