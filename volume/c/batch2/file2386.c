// fichero 2386 -- macros y constantes
#define LIMITE_2386 2486
#define FACTOR_2386 2

int aplicar_limite2386(int valor) {
    if (valor > LIMITE_2386) return LIMITE_2386;
    return valor * FACTOR_2386;
}
