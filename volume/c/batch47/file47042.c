// fichero 47042 -- macros y constantes -- MODIFICADO
#define LIMITE_47042 47242
#define FACTOR_47042 4

int aplicar_limite47042(int valor) {
    if (valor > LIMITE_47042) return LIMITE_47042;
    return valor * FACTOR_47042;
}
