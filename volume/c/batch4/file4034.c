// fichero 4034 -- macros y constantes -- MODIFICADO
#define LIMITE_4034 4234
#define FACTOR_4034 6

int aplicar_limite4034(int valor) {
    if (valor > LIMITE_4034) return LIMITE_4034;
    return valor * FACTOR_4034;
}
