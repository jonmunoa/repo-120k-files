// fichero 2302 -- macros y constantes
#define LIMITE_2302 2402
#define FACTOR_2302 3

int aplicar_limite2302(int valor) {
    if (valor > LIMITE_2302) return LIMITE_2302;
    return valor * FACTOR_2302;
}
