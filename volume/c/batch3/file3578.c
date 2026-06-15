// fichero 3578 -- macros y constantes -- MODIFICADO
#define LIMITE_3578 3778
#define FACTOR_3578 5

int aplicar_limite3578(int valor) {
    if (valor > LIMITE_3578) return LIMITE_3578;
    return valor * FACTOR_3578;
}
