// fichero 314 -- macros y constantes
#define LIMITE_314 414
#define FACTOR_314 5

int aplicar_limite314(int valor) {
    if (valor > LIMITE_314) return LIMITE_314;
    return valor * FACTOR_314;
}
