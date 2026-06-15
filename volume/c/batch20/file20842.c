// fichero 20842 -- macros y constantes -- MODIFICADO
#define LIMITE_20842 21042
#define FACTOR_20842 4

int aplicar_limite20842(int valor) {
    if (valor > LIMITE_20842) return LIMITE_20842;
    return valor * FACTOR_20842;
}
