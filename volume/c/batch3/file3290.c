// fichero 3290 -- macros y constantes
#define LIMITE_3290 3390
#define FACTOR_3290 1

int aplicar_limite3290(int valor) {
    if (valor > LIMITE_3290) return LIMITE_3290;
    return valor * FACTOR_3290;
}
