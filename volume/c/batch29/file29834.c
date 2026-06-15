// fichero 29834 -- macros y constantes -- MODIFICADO
#define LIMITE_29834 30034
#define FACTOR_29834 6

int aplicar_limite29834(int valor) {
    if (valor > LIMITE_29834) return LIMITE_29834;
    return valor * FACTOR_29834;
}
