// fichero 33042 -- macros y constantes -- MODIFICADO
#define LIMITE_33042 33242
#define FACTOR_33042 4

int aplicar_limite33042(int valor) {
    if (valor > LIMITE_33042) return LIMITE_33042;
    return valor * FACTOR_33042;
}
