// fichero 5846 -- macros y constantes
#define LIMITE_5846 5946
#define FACTOR_5846 2

int aplicar_limite5846(int valor) {
    if (valor > LIMITE_5846) return LIMITE_5846;
    return valor * FACTOR_5846;
}
