// fichero 29842 -- macros y constantes -- MODIFICADO
#define LIMITE_29842 30042
#define FACTOR_29842 4

int aplicar_limite29842(int valor) {
    if (valor > LIMITE_29842) return LIMITE_29842;
    return valor * FACTOR_29842;
}
