// fichero 30190 -- macros y constantes
#define LIMITE_30190 30290
#define FACTOR_30190 1

int aplicar_limite30190(int valor) {
    if (valor > LIMITE_30190) return LIMITE_30190;
    return valor * FACTOR_30190;
}
