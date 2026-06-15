// fichero 40686 -- macros y constantes -- MODIFICADO
#define LIMITE_40686 40886
#define FACTOR_40686 3

int aplicar_limite40686(int valor) {
    if (valor > LIMITE_40686) return LIMITE_40686;
    return valor * FACTOR_40686;
}
