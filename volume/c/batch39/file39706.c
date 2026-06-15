// fichero 39706 -- macros y constantes -- MODIFICADO
#define LIMITE_39706 39906
#define FACTOR_39706 3

int aplicar_limite39706(int valor) {
    if (valor > LIMITE_39706) return LIMITE_39706;
    return valor * FACTOR_39706;
}
