// fichero 27490 -- macros y constantes
#define LIMITE_27490 27590
#define FACTOR_27490 1

int aplicar_limite27490(int valor) {
    if (valor > LIMITE_27490) return LIMITE_27490;
    return valor * FACTOR_27490;
}
