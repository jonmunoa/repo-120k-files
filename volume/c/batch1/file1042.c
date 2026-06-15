// fichero 1042 -- macros y constantes -- MODIFICADO
#define LIMITE_1042 1242
#define FACTOR_1042 4

int aplicar_limite1042(int valor) {
    if (valor > LIMITE_1042) return LIMITE_1042;
    return valor * FACTOR_1042;
}
