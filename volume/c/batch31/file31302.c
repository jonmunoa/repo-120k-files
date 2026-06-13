// fichero 31302 -- macros y constantes
#define LIMITE_31302 31402
#define FACTOR_31302 3

int aplicar_limite31302(int valor) {
    if (valor > LIMITE_31302) return LIMITE_31302;
    return valor * FACTOR_31302;
}
