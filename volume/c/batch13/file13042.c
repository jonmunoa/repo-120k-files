// fichero 13042 -- macros y constantes -- MODIFICADO
#define LIMITE_13042 13242
#define FACTOR_13042 4

int aplicar_limite13042(int valor) {
    if (valor > LIMITE_13042) return LIMITE_13042;
    return valor * FACTOR_13042;
}
