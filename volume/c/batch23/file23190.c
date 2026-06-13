// fichero 23190 -- macros y constantes
#define LIMITE_23190 23290
#define FACTOR_23190 1

int aplicar_limite23190(int valor) {
    if (valor > LIMITE_23190) return LIMITE_23190;
    return valor * FACTOR_23190;
}
