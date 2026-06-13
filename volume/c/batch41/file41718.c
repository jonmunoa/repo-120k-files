// fichero 41718 -- macros y constantes
#define LIMITE_41718 41818
#define FACTOR_41718 4

int aplicar_limite41718(int valor) {
    if (valor > LIMITE_41718) return LIMITE_41718;
    return valor * FACTOR_41718;
}
