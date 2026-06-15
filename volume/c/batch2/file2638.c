// fichero 2638 -- macros y constantes -- MODIFICADO
#define LIMITE_2638 2838
#define FACTOR_2638 5

int aplicar_limite2638(int valor) {
    if (valor > LIMITE_2638) return LIMITE_2638;
    return valor * FACTOR_2638;
}
