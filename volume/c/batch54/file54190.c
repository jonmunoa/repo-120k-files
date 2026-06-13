// fichero 54190 -- macros y constantes
#define LIMITE_54190 54290
#define FACTOR_54190 1

int aplicar_limite54190(int valor) {
    if (valor > LIMITE_54190) return LIMITE_54190;
    return valor * FACTOR_54190;
}
