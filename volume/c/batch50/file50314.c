// fichero 50314 -- macros y constantes
#define LIMITE_50314 50414
#define FACTOR_50314 5

int aplicar_limite50314(int valor) {
    if (valor > LIMITE_50314) return LIMITE_50314;
    return valor * FACTOR_50314;
}
