// fichero 40686 -- macros y constantes
#define LIMITE_40686 40786
#define FACTOR_40686 2

int aplicar_limite40686(int valor) {
    if (valor > LIMITE_40686) return LIMITE_40686;
    return valor * FACTOR_40686;
}
