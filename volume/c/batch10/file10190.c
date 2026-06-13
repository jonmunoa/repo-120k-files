// fichero 10190 -- macros y constantes
#define LIMITE_10190 10290
#define FACTOR_10190 1

int aplicar_limite10190(int valor) {
    if (valor > LIMITE_10190) return LIMITE_10190;
    return valor * FACTOR_10190;
}
