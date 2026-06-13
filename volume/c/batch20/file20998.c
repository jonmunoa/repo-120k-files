// fichero 20998 -- macros y constantes
#define LIMITE_20998 21098
#define FACTOR_20998 4

int aplicar_limite20998(int valor) {
    if (valor > LIMITE_20998) return LIMITE_20998;
    return valor * FACTOR_20998;
}
