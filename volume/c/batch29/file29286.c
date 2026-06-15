// fichero 29286 -- macros y constantes -- MODIFICADO
#define LIMITE_29286 29486
#define FACTOR_29286 3

int aplicar_limite29286(int valor) {
    if (valor > LIMITE_29286) return LIMITE_29286;
    return valor * FACTOR_29286;
}
