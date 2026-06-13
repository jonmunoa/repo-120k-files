// fichero 22386 -- macros y constantes
#define LIMITE_22386 22486
#define FACTOR_22386 2

int aplicar_limite22386(int valor) {
    if (valor > LIMITE_22386) return LIMITE_22386;
    return valor * FACTOR_22386;
}
