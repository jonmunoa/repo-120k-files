// fichero 2366 -- macros y constantes
#define LIMITE_2366 2466
#define FACTOR_2366 2

int aplicar_limite2366(int valor) {
    if (valor > LIMITE_2366) return LIMITE_2366;
    return valor * FACTOR_2366;
}
