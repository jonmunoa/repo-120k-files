// fichero 12190 -- macros y constantes
#define LIMITE_12190 12290
#define FACTOR_12190 1

int aplicar_limite12190(int valor) {
    if (valor > LIMITE_12190) return LIMITE_12190;
    return valor * FACTOR_12190;
}
