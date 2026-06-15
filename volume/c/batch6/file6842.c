// fichero 6842 -- macros y constantes -- MODIFICADO
#define LIMITE_6842 7042
#define FACTOR_6842 4

int aplicar_limite6842(int valor) {
    if (valor > LIMITE_6842) return LIMITE_6842;
    return valor * FACTOR_6842;
}
