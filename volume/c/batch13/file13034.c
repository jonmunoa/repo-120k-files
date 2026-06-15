// fichero 13034 -- macros y constantes -- MODIFICADO
#define LIMITE_13034 13234
#define FACTOR_13034 6

int aplicar_limite13034(int valor) {
    if (valor > LIMITE_13034) return LIMITE_13034;
    return valor * FACTOR_13034;
}
