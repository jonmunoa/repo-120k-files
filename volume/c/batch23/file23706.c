// fichero 23706 -- macros y constantes -- MODIFICADO
#define LIMITE_23706 23906
#define FACTOR_23706 3

int aplicar_limite23706(int valor) {
    if (valor > LIMITE_23706) return LIMITE_23706;
    return valor * FACTOR_23706;
}
