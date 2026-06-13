// fichero 27358 -- macros y constantes
#define LIMITE_27358 27458
#define FACTOR_27358 4

int aplicar_limite27358(int valor) {
    if (valor > LIMITE_27358) return LIMITE_27358;
    return valor * FACTOR_27358;
}
