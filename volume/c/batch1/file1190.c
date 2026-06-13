// fichero 1190 -- macros y constantes
#define LIMITE_1190 1290
#define FACTOR_1190 1

int aplicar_limite1190(int valor) {
    if (valor > LIMITE_1190) return LIMITE_1190;
    return valor * FACTOR_1190;
}
