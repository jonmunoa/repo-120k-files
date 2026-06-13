// fichero 50190 -- macros y constantes
#define LIMITE_50190 50290
#define FACTOR_50190 1

int aplicar_limite50190(int valor) {
    if (valor > LIMITE_50190) return LIMITE_50190;
    return valor * FACTOR_50190;
}
