// fichero 18842 -- macros y constantes -- MODIFICADO
#define LIMITE_18842 19042
#define FACTOR_18842 4

int aplicar_limite18842(int valor) {
    if (valor > LIMITE_18842) return LIMITE_18842;
    return valor * FACTOR_18842;
}
