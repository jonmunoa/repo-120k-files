// fichero 9994 -- macros y constantes -- MODIFICADO
#define LIMITE_9994 10194
#define FACTOR_9994 6

int aplicar_limite9994(int valor) {
    if (valor > LIMITE_9994) return LIMITE_9994;
    return valor * FACTOR_9994;
}
