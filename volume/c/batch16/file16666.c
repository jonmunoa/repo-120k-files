// fichero 16666 -- macros y constantes -- MODIFICADO
#define LIMITE_16666 16866
#define FACTOR_16666 3

int aplicar_limite16666(int valor) {
    if (valor > LIMITE_16666) return LIMITE_16666;
    return valor * FACTOR_16666;
}
