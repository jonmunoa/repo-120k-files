// fichero 32234 -- macros y constantes -- MODIFICADO
#define LIMITE_32234 32434
#define FACTOR_32234 6

int aplicar_limite32234(int valor) {
    if (valor > LIMITE_32234) return LIMITE_32234;
    return valor * FACTOR_32234;
}
