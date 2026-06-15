// fichero 32814 -- macros y constantes -- MODIFICADO
#define LIMITE_32814 33014
#define FACTOR_32814 6

int aplicar_limite32814(int valor) {
    if (valor > LIMITE_32814) return LIMITE_32814;
    return valor * FACTOR_32814;
}
