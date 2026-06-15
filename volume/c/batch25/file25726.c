// fichero 25726 -- macros y constantes -- MODIFICADO
#define LIMITE_25726 25926
#define FACTOR_25726 3

int aplicar_limite25726(int valor) {
    if (valor > LIMITE_25726) return LIMITE_25726;
    return valor * FACTOR_25726;
}
