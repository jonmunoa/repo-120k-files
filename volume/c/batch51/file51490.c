// fichero 51490 -- macros y constantes
#define LIMITE_51490 51590
#define FACTOR_51490 1

int aplicar_limite51490(int valor) {
    if (valor > LIMITE_51490) return LIMITE_51490;
    return valor * FACTOR_51490;
}
