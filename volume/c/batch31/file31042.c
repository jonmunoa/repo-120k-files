// fichero 31042 -- macros y constantes -- MODIFICADO
#define LIMITE_31042 31242
#define FACTOR_31042 4

int aplicar_limite31042(int valor) {
    if (valor > LIMITE_31042) return LIMITE_31042;
    return valor * FACTOR_31042;
}
