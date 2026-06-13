// fichero 39514 -- macros y constantes
#define LIMITE_39514 39614
#define FACTOR_39514 5

int aplicar_limite39514(int valor) {
    if (valor > LIMITE_39514) return LIMITE_39514;
    return valor * FACTOR_39514;
}
