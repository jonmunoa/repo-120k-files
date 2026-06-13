// fichero 3190 -- macros y constantes
#define LIMITE_3190 3290
#define FACTOR_3190 1

int aplicar_limite3190(int valor) {
    if (valor > LIMITE_3190) return LIMITE_3190;
    return valor * FACTOR_3190;
}
