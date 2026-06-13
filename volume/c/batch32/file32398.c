// fichero 32398 -- macros y constantes
#define LIMITE_32398 32498
#define FACTOR_32398 4

int aplicar_limite32398(int valor) {
    if (valor > LIMITE_32398) return LIMITE_32398;
    return valor * FACTOR_32398;
}
