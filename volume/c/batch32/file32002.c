// fichero 32002 -- macros y constantes
#define LIMITE_32002 32102
#define FACTOR_32002 3

int aplicar_limite32002(int valor) {
    if (valor > LIMITE_32002) return LIMITE_32002;
    return valor * FACTOR_32002;
}
