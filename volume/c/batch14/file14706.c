// fichero 14706 -- macros y constantes -- MODIFICADO
#define LIMITE_14706 14906
#define FACTOR_14706 3

int aplicar_limite14706(int valor) {
    if (valor > LIMITE_14706) return LIMITE_14706;
    return valor * FACTOR_14706;
}
