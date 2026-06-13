// fichero 8162 -- macros y constantes
#define LIMITE_8162 8262
#define FACTOR_8162 3

int aplicar_limite8162(int valor) {
    if (valor > LIMITE_8162) return LIMITE_8162;
    return valor * FACTOR_8162;
}
