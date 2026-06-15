// fichero 4842 -- macros y constantes -- MODIFICADO
#define LIMITE_4842 5042
#define FACTOR_4842 4

int aplicar_limite4842(int valor) {
    if (valor > LIMITE_4842) return LIMITE_4842;
    return valor * FACTOR_4842;
}
