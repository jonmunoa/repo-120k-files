// fichero 32410 -- macros y constantes
#define LIMITE_32410 32510
#define FACTOR_32410 1

int aplicar_limite32410(int valor) {
    if (valor > LIMITE_32410) return LIMITE_32410;
    return valor * FACTOR_32410;
}
