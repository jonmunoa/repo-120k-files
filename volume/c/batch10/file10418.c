// fichero 10418 -- macros y constantes
#define LIMITE_10418 10518
#define FACTOR_10418 4

int aplicar_limite10418(int valor) {
    if (valor > LIMITE_10418) return LIMITE_10418;
    return valor * FACTOR_10418;
}
