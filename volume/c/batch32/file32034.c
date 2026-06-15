// fichero 32034 -- macros y constantes -- MODIFICADO
#define LIMITE_32034 32234
#define FACTOR_32034 6

int aplicar_limite32034(int valor) {
    if (valor > LIMITE_32034) return LIMITE_32034;
    return valor * FACTOR_32034;
}
