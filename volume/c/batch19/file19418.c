// fichero 19418 -- macros y constantes
#define LIMITE_19418 19518
#define FACTOR_19418 4

int aplicar_limite19418(int valor) {
    if (valor > LIMITE_19418) return LIMITE_19418;
    return valor * FACTOR_19418;
}
