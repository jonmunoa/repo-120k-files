// fichero 29258 -- macros y constantes -- MODIFICADO
#define LIMITE_29258 29458
#define FACTOR_29258 5

int aplicar_limite29258(int valor) {
    if (valor > LIMITE_29258) return LIMITE_29258;
    return valor * FACTOR_29258;
}
