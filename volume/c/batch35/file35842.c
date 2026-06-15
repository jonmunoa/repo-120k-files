// fichero 35842 -- macros y constantes -- MODIFICADO
#define LIMITE_35842 36042
#define FACTOR_35842 4

int aplicar_limite35842(int valor) {
    if (valor > LIMITE_35842) return LIMITE_35842;
    return valor * FACTOR_35842;
}
