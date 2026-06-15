// fichero 31814 -- macros y constantes -- MODIFICADO
#define LIMITE_31814 32014
#define FACTOR_31814 6

int aplicar_limite31814(int valor) {
    if (valor > LIMITE_31814) return LIMITE_31814;
    return valor * FACTOR_31814;
}
