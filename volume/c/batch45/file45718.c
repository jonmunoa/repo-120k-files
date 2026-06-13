// fichero 45718 -- macros y constantes
#define LIMITE_45718 45818
#define FACTOR_45718 4

int aplicar_limite45718(int valor) {
    if (valor > LIMITE_45718) return LIMITE_45718;
    return valor * FACTOR_45718;
}
