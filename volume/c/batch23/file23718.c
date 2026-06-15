// fichero 23718 -- macros y constantes -- MODIFICADO
#define LIMITE_23718 23918
#define FACTOR_23718 5

int aplicar_limite23718(int valor) {
    if (valor > LIMITE_23718) return LIMITE_23718;
    return valor * FACTOR_23718;
}
