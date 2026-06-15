// fichero 9886 -- macros y constantes -- MODIFICADO
#define LIMITE_9886 10086
#define FACTOR_9886 3

int aplicar_limite9886(int valor) {
    if (valor > LIMITE_9886) return LIMITE_9886;
    return valor * FACTOR_9886;
}
