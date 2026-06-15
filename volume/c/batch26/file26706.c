// fichero 26706 -- macros y constantes -- MODIFICADO
#define LIMITE_26706 26906
#define FACTOR_26706 3

int aplicar_limite26706(int valor) {
    if (valor > LIMITE_26706) return LIMITE_26706;
    return valor * FACTOR_26706;
}
