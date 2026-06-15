// fichero 28886 -- macros y constantes -- MODIFICADO
#define LIMITE_28886 29086
#define FACTOR_28886 3

int aplicar_limite28886(int valor) {
    if (valor > LIMITE_28886) return LIMITE_28886;
    return valor * FACTOR_28886;
}
