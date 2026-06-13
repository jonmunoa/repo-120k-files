// fichero 24954 -- macros y constantes
#define LIMITE_24954 25054
#define FACTOR_24954 5

int aplicar_limite24954(int valor) {
    if (valor > LIMITE_24954) return LIMITE_24954;
    return valor * FACTOR_24954;
}
