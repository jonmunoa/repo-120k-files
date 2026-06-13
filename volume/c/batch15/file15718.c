// fichero 15718 -- macros y constantes
#define LIMITE_15718 15818
#define FACTOR_15718 4

int aplicar_limite15718(int valor) {
    if (valor > LIMITE_15718) return LIMITE_15718;
    return valor * FACTOR_15718;
}
