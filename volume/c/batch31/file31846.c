// fichero 31846 -- macros y constantes
#define LIMITE_31846 31946
#define FACTOR_31846 2

int aplicar_limite31846(int valor) {
    if (valor > LIMITE_31846) return LIMITE_31846;
    return valor * FACTOR_31846;
}
