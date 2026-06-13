// fichero 24926 -- macros y constantes
#define LIMITE_24926 25026
#define FACTOR_24926 2

int aplicar_limite24926(int valor) {
    if (valor > LIMITE_24926) return LIMITE_24926;
    return valor * FACTOR_24926;
}
