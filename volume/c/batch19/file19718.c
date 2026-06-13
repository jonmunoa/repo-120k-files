// fichero 19718 -- macros y constantes
#define LIMITE_19718 19818
#define FACTOR_19718 4

int aplicar_limite19718(int valor) {
    if (valor > LIMITE_19718) return LIMITE_19718;
    return valor * FACTOR_19718;
}
