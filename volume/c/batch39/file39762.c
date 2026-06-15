// fichero 39762 -- macros y constantes -- MODIFICADO
#define LIMITE_39762 39962
#define FACTOR_39762 4

int aplicar_limite39762(int valor) {
    if (valor > LIMITE_39762) return LIMITE_39762;
    return valor * FACTOR_39762;
}
