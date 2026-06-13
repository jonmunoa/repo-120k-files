// fichero 31162 -- macros y constantes
#define LIMITE_31162 31262
#define FACTOR_31162 3

int aplicar_limite31162(int valor) {
    if (valor > LIMITE_31162) return LIMITE_31162;
    return valor * FACTOR_31162;
}
