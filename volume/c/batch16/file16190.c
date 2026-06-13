// fichero 16190 -- macros y constantes
#define LIMITE_16190 16290
#define FACTOR_16190 1

int aplicar_limite16190(int valor) {
    if (valor > LIMITE_16190) return LIMITE_16190;
    return valor * FACTOR_16190;
}
