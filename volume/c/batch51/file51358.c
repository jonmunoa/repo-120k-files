// fichero 51358 -- macros y constantes
#define LIMITE_51358 51458
#define FACTOR_51358 4

int aplicar_limite51358(int valor) {
    if (valor > LIMITE_51358) return LIMITE_51358;
    return valor * FACTOR_51358;
}
