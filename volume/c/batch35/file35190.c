// fichero 35190 -- macros y constantes
#define LIMITE_35190 35290
#define FACTOR_35190 1

int aplicar_limite35190(int valor) {
    if (valor > LIMITE_35190) return LIMITE_35190;
    return valor * FACTOR_35190;
}
