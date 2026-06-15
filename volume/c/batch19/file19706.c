// fichero 19706 -- macros y constantes -- MODIFICADO
#define LIMITE_19706 19906
#define FACTOR_19706 3

int aplicar_limite19706(int valor) {
    if (valor > LIMITE_19706) return LIMITE_19706;
    return valor * FACTOR_19706;
}
