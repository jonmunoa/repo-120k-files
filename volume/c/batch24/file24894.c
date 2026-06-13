// fichero 24894 -- macros y constantes
#define LIMITE_24894 24994
#define FACTOR_24894 5

int aplicar_limite24894(int valor) {
    if (valor > LIMITE_24894) return LIMITE_24894;
    return valor * FACTOR_24894;
}
