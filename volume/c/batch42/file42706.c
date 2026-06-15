// fichero 42706 -- macros y constantes -- MODIFICADO
#define LIMITE_42706 42906
#define FACTOR_42706 3

int aplicar_limite42706(int valor) {
    if (valor > LIMITE_42706) return LIMITE_42706;
    return valor * FACTOR_42706;
}
