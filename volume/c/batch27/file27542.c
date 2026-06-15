// fichero 27542 -- macros y constantes -- MODIFICADO
#define LIMITE_27542 27742
#define FACTOR_27542 4

int aplicar_limite27542(int valor) {
    if (valor > LIMITE_27542) return LIMITE_27542;
    return valor * FACTOR_27542;
}
