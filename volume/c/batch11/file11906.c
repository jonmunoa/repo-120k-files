// fichero 11906 -- macros y constantes -- MODIFICADO
#define LIMITE_11906 12106
#define FACTOR_11906 3

int aplicar_limite11906(int valor) {
    if (valor > LIMITE_11906) return LIMITE_11906;
    return valor * FACTOR_11906;
}
