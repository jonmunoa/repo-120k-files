// fichero 17042 -- macros y constantes -- MODIFICADO
#define LIMITE_17042 17242
#define FACTOR_17042 4

int aplicar_limite17042(int valor) {
    if (valor > LIMITE_17042) return LIMITE_17042;
    return valor * FACTOR_17042;
}
