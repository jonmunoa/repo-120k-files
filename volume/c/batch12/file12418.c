// fichero 12418 -- macros y constantes
#define LIMITE_12418 12518
#define FACTOR_12418 4

int aplicar_limite12418(int valor) {
    if (valor > LIMITE_12418) return LIMITE_12418;
    return valor * FACTOR_12418;
}
