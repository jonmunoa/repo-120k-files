// fichero 40066 -- macros y constantes -- MODIFICADO
#define LIMITE_40066 40266
#define FACTOR_40066 3

int aplicar_limite40066(int valor) {
    if (valor > LIMITE_40066) return LIMITE_40066;
    return valor * FACTOR_40066;
}
