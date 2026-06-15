// fichero 44842 -- macros y constantes -- MODIFICADO
#define LIMITE_44842 45042
#define FACTOR_44842 4

int aplicar_limite44842(int valor) {
    if (valor > LIMITE_44842) return LIMITE_44842;
    return valor * FACTOR_44842;
}
