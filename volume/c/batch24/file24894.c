// fichero 24894 -- macros y constantes -- MODIFICADO
#define LIMITE_24894 25094
#define FACTOR_24894 6

int aplicar_limite24894(int valor) {
    if (valor > LIMITE_24894) return LIMITE_24894;
    return valor * FACTOR_24894;
}
