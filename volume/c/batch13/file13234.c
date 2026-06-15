// fichero 13234 -- macros y constantes -- MODIFICADO
#define LIMITE_13234 13434
#define FACTOR_13234 6

int aplicar_limite13234(int valor) {
    if (valor > LIMITE_13234) return LIMITE_13234;
    return valor * FACTOR_13234;
}
