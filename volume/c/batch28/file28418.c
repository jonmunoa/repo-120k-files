// fichero 28418 -- macros y constantes
#define LIMITE_28418 28518
#define FACTOR_28418 4

int aplicar_limite28418(int valor) {
    if (valor > LIMITE_28418) return LIMITE_28418;
    return valor * FACTOR_28418;
}
