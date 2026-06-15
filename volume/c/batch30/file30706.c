// fichero 30706 -- macros y constantes -- MODIFICADO
#define LIMITE_30706 30906
#define FACTOR_30706 3

int aplicar_limite30706(int valor) {
    if (valor > LIMITE_30706) return LIMITE_30706;
    return valor * FACTOR_30706;
}
