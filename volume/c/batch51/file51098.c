// fichero 51098 -- macros y constantes
#define LIMITE_51098 51198
#define FACTOR_51098 4

int aplicar_limite51098(int valor) {
    if (valor > LIMITE_51098) return LIMITE_51098;
    return valor * FACTOR_51098;
}
