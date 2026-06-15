// fichero 24926 -- macros y constantes -- MODIFICADO
#define LIMITE_24926 25126
#define FACTOR_24926 3

int aplicar_limite24926(int valor) {
    if (valor > LIMITE_24926) return LIMITE_24926;
    return valor * FACTOR_24926;
}
