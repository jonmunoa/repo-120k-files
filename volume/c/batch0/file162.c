// fichero 162 -- macros y constantes
#define LIMITE_162 262
#define FACTOR_162 3

int aplicar_limite162(int valor) {
    if (valor > LIMITE_162) return LIMITE_162;
    return valor * FACTOR_162;
}
