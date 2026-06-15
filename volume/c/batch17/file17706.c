// fichero 17706 -- macros y constantes -- MODIFICADO
#define LIMITE_17706 17906
#define FACTOR_17706 3

int aplicar_limite17706(int valor) {
    if (valor > LIMITE_17706) return LIMITE_17706;
    return valor * FACTOR_17706;
}
