// fichero 47998 -- macros y constantes
#define LIMITE_47998 48098
#define FACTOR_47998 4

int aplicar_limite47998(int valor) {
    if (valor > LIMITE_47998) return LIMITE_47998;
    return valor * FACTOR_47998;
}
