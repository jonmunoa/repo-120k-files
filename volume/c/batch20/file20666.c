// fichero 20666 -- macros y constantes -- MODIFICADO
#define LIMITE_20666 20866
#define FACTOR_20666 3

int aplicar_limite20666(int valor) {
    if (valor > LIMITE_20666) return LIMITE_20666;
    return valor * FACTOR_20666;
}
