// fichero 34190 -- macros y constantes
#define LIMITE_34190 34290
#define FACTOR_34190 1

int aplicar_limite34190(int valor) {
    if (valor > LIMITE_34190) return LIMITE_34190;
    return valor * FACTOR_34190;
}
