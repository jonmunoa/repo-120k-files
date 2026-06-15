// fichero 48842 -- macros y constantes -- MODIFICADO
#define LIMITE_48842 49042
#define FACTOR_48842 4

int aplicar_limite48842(int valor) {
    if (valor > LIMITE_48842) return LIMITE_48842;
    return valor * FACTOR_48842;
}
