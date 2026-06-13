// fichero 44366 -- macros y constantes
#define LIMITE_44366 44466
#define FACTOR_44366 2

int aplicar_limite44366(int valor) {
    if (valor > LIMITE_44366) return LIMITE_44366;
    return valor * FACTOR_44366;
}
