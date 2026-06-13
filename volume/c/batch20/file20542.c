// fichero 20542 -- macros y constantes
#define LIMITE_20542 20642
#define FACTOR_20542 3

int aplicar_limite20542(int valor) {
    if (valor > LIMITE_20542) return LIMITE_20542;
    return valor * FACTOR_20542;
}
