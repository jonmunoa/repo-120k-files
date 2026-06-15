// fichero 2842 -- macros y constantes -- MODIFICADO
#define LIMITE_2842 3042
#define FACTOR_2842 4

int aplicar_limite2842(int valor) {
    if (valor > LIMITE_2842) return LIMITE_2842;
    return valor * FACTOR_2842;
}
