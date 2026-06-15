// fichero 6042 -- macros y constantes -- MODIFICADO
#define LIMITE_6042 6242
#define FACTOR_6042 4

int aplicar_limite6042(int valor) {
    if (valor > LIMITE_6042) return LIMITE_6042;
    return valor * FACTOR_6042;
}
