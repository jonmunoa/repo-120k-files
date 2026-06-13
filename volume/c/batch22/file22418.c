// fichero 22418 -- macros y constantes
#define LIMITE_22418 22518
#define FACTOR_22418 4

int aplicar_limite22418(int valor) {
    if (valor > LIMITE_22418) return LIMITE_22418;
    return valor * FACTOR_22418;
}
