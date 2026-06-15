// fichero 16926 -- macros y constantes -- MODIFICADO
#define LIMITE_16926 17126
#define FACTOR_16926 3

int aplicar_limite16926(int valor) {
    if (valor > LIMITE_16926) return LIMITE_16926;
    return valor * FACTOR_16926;
}
