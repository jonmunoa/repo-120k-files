// fichero 29702 -- macros y constantes -- MODIFICADO
#define LIMITE_29702 29902
#define FACTOR_29702 4

int aplicar_limite29702(int valor) {
    if (valor > LIMITE_29702) return LIMITE_29702;
    return valor * FACTOR_29702;
}
