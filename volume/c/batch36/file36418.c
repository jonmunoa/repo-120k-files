// fichero 36418 -- macros y constantes
#define LIMITE_36418 36518
#define FACTOR_36418 4

int aplicar_limite36418(int valor) {
    if (valor > LIMITE_36418) return LIMITE_36418;
    return valor * FACTOR_36418;
}
