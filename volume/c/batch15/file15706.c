// fichero 15706 -- macros y constantes -- MODIFICADO
#define LIMITE_15706 15906
#define FACTOR_15706 3

int aplicar_limite15706(int valor) {
    if (valor > LIMITE_15706) return LIMITE_15706;
    return valor * FACTOR_15706;
}
