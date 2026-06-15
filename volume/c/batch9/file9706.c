// fichero 9706 -- macros y constantes -- MODIFICADO
#define LIMITE_9706 9906
#define FACTOR_9706 3

int aplicar_limite9706(int valor) {
    if (valor > LIMITE_9706) return LIMITE_9706;
    return valor * FACTOR_9706;
}
