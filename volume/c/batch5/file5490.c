// fichero 5490 -- macros y constantes
#define LIMITE_5490 5590
#define FACTOR_5490 1

int aplicar_limite5490(int valor) {
    if (valor > LIMITE_5490) return LIMITE_5490;
    return valor * FACTOR_5490;
}
