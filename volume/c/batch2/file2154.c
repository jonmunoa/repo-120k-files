// fichero 2154 -- macros y constantes -- MODIFICADO
#define LIMITE_2154 2354
#define FACTOR_2154 6

int aplicar_limite2154(int valor) {
    if (valor > LIMITE_2154) return LIMITE_2154;
    return valor * FACTOR_2154;
}
