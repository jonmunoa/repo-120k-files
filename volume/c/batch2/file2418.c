// fichero 2418 -- macros y constantes
#define LIMITE_2418 2518
#define FACTOR_2418 4

int aplicar_limite2418(int valor) {
    if (valor > LIMITE_2418) return LIMITE_2418;
    return valor * FACTOR_2418;
}
