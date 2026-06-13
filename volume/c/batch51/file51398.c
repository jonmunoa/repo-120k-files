// fichero 51398 -- macros y constantes
#define LIMITE_51398 51498
#define FACTOR_51398 4

int aplicar_limite51398(int valor) {
    if (valor > LIMITE_51398) return LIMITE_51398;
    return valor * FACTOR_51398;
}
