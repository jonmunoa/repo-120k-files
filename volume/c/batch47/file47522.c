// fichero 47522 -- macros y constantes
#define LIMITE_47522 47622
#define FACTOR_47522 3

int aplicar_limite47522(int valor) {
    if (valor > LIMITE_47522) return LIMITE_47522;
    return valor * FACTOR_47522;
}
