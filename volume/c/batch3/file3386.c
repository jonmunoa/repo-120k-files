// fichero 3386 -- macros y constantes
#define LIMITE_3386 3486
#define FACTOR_3386 2

int aplicar_limite3386(int valor) {
    if (valor > LIMITE_3386) return LIMITE_3386;
    return valor * FACTOR_3386;
}
