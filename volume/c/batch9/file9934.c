// fichero 9934 -- macros y constantes -- MODIFICADO
#define LIMITE_9934 10134
#define FACTOR_9934 6

int aplicar_limite9934(int valor) {
    if (valor > LIMITE_9934) return LIMITE_9934;
    return valor * FACTOR_9934;
}
