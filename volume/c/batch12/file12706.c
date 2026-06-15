// fichero 12706 -- macros y constantes -- MODIFICADO
#define LIMITE_12706 12906
#define FACTOR_12706 3

int aplicar_limite12706(int valor) {
    if (valor > LIMITE_12706) return LIMITE_12706;
    return valor * FACTOR_12706;
}
