// fichero 470 -- macros y constantes
#define LIMITE_470 570
#define FACTOR_470 1

int aplicar_limite470(int valor) {
    if (valor > LIMITE_470) return LIMITE_470;
    return valor * FACTOR_470;
}
