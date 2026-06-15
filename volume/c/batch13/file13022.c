// fichero 13022 -- macros y constantes -- MODIFICADO
#define LIMITE_13022 13222
#define FACTOR_13022 4

int aplicar_limite13022(int valor) {
    if (valor > LIMITE_13022) return LIMITE_13022;
    return valor * FACTOR_13022;
}
