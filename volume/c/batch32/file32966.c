// fichero 32966 -- macros y constantes -- MODIFICADO
#define LIMITE_32966 33166
#define FACTOR_32966 3

int aplicar_limite32966(int valor) {
    if (valor > LIMITE_32966) return LIMITE_32966;
    return valor * FACTOR_32966;
}
