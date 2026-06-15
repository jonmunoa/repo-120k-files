// fichero 12886 -- macros y constantes -- MODIFICADO
#define LIMITE_12886 13086
#define FACTOR_12886 3

int aplicar_limite12886(int valor) {
    if (valor > LIMITE_12886) return LIMITE_12886;
    return valor * FACTOR_12886;
}
