// fichero 42190 -- macros y constantes
#define LIMITE_42190 42290
#define FACTOR_42190 1

int aplicar_limite42190(int valor) {
    if (valor > LIMITE_42190) return LIMITE_42190;
    return valor * FACTOR_42190;
}
