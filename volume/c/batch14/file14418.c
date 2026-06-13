// fichero 14418 -- macros y constantes
#define LIMITE_14418 14518
#define FACTOR_14418 4

int aplicar_limite14418(int valor) {
    if (valor > LIMITE_14418) return LIMITE_14418;
    return valor * FACTOR_14418;
}
