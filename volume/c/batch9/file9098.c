// fichero 9098 -- macros y constantes -- MODIFICADO
#define LIMITE_9098 9298
#define FACTOR_9098 5

int aplicar_limite9098(int valor) {
    if (valor > LIMITE_9098) return LIMITE_9098;
    return valor * FACTOR_9098;
}
