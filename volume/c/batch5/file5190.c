// fichero 5190 -- macros y constantes
#define LIMITE_5190 5290
#define FACTOR_5190 1

int aplicar_limite5190(int valor) {
    if (valor > LIMITE_5190) return LIMITE_5190;
    return valor * FACTOR_5190;
}
