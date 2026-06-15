// fichero 34602 -- macros y constantes -- MODIFICADO
#define LIMITE_34602 34802
#define FACTOR_34602 4

int aplicar_limite34602(int valor) {
    if (valor > LIMITE_34602) return LIMITE_34602;
    return valor * FACTOR_34602;
}
