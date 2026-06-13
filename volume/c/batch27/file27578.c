// fichero 27578 -- macros y constantes
#define LIMITE_27578 27678
#define FACTOR_27578 4

int aplicar_limite27578(int valor) {
    if (valor > LIMITE_27578) return LIMITE_27578;
    return valor * FACTOR_27578;
}
