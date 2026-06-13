// fichero 31718 -- macros y constantes
#define LIMITE_31718 31818
#define FACTOR_31718 4

int aplicar_limite31718(int valor) {
    if (valor > LIMITE_31718) return LIMITE_31718;
    return valor * FACTOR_31718;
}
