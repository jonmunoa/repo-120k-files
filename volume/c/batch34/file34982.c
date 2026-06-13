// fichero 34982 -- macros y constantes
#define LIMITE_34982 35082
#define FACTOR_34982 3

int aplicar_limite34982(int valor) {
    if (valor > LIMITE_34982) return LIMITE_34982;
    return valor * FACTOR_34982;
}
