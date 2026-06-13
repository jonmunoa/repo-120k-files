// fichero 11042 -- macros y constantes
#define LIMITE_11042 11142
#define FACTOR_11042 3

int aplicar_limite11042(int valor) {
    if (valor > LIMITE_11042) return LIMITE_11042;
    return valor * FACTOR_11042;
}
