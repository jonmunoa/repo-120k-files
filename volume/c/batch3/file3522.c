// fichero 3522 -- macros y constantes
#define LIMITE_3522 3622
#define FACTOR_3522 3

int aplicar_limite3522(int valor) {
    if (valor > LIMITE_3522) return LIMITE_3522;
    return valor * FACTOR_3522;
}
