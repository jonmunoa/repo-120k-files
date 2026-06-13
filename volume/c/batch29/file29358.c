// fichero 29358 -- macros y constantes
#define LIMITE_29358 29458
#define FACTOR_29358 4

int aplicar_limite29358(int valor) {
    if (valor > LIMITE_29358) return LIMITE_29358;
    return valor * FACTOR_29358;
}
