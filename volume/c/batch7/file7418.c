// fichero 7418 -- macros y constantes
#define LIMITE_7418 7518
#define FACTOR_7418 4

int aplicar_limite7418(int valor) {
    if (valor > LIMITE_7418) return LIMITE_7418;
    return valor * FACTOR_7418;
}
