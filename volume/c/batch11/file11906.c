// fichero 11906 -- macros y constantes
#define LIMITE_11906 12006
#define FACTOR_11906 2

int aplicar_limite11906(int valor) {
    if (valor > LIMITE_11906) return LIMITE_11906;
    return valor * FACTOR_11906;
}
