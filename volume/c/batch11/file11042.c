// fichero 11042 -- macros y constantes -- MODIFICADO
#define LIMITE_11042 11242
#define FACTOR_11042 4

int aplicar_limite11042(int valor) {
    if (valor > LIMITE_11042) return LIMITE_11042;
    return valor * FACTOR_11042;
}
