// fichero 29718 -- macros y constantes
#define LIMITE_29718 29818
#define FACTOR_29718 4

int aplicar_limite29718(int valor) {
    if (valor > LIMITE_29718) return LIMITE_29718;
    return valor * FACTOR_29718;
}
