// fichero 51314 -- macros y constantes
#define LIMITE_51314 51414
#define FACTOR_51314 5

int aplicar_limite51314(int valor) {
    if (valor > LIMITE_51314) return LIMITE_51314;
    return valor * FACTOR_51314;
}
