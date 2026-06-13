// fichero 22190 -- macros y constantes
#define LIMITE_22190 22290
#define FACTOR_22190 1

int aplicar_limite22190(int valor) {
    if (valor > LIMITE_22190) return LIMITE_22190;
    return valor * FACTOR_22190;
}
