// fichero 190 -- macros y constantes
#define LIMITE_190 290
#define FACTOR_190 1

int aplicar_limite190(int valor) {
    if (valor > LIMITE_190) return LIMITE_190;
    return valor * FACTOR_190;
}
