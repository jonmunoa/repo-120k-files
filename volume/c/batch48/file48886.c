// fichero 48886 -- macros y constantes -- MODIFICADO
#define LIMITE_48886 49086
#define FACTOR_48886 3

int aplicar_limite48886(int valor) {
    if (valor > LIMITE_48886) return LIMITE_48886;
    return valor * FACTOR_48886;
}
