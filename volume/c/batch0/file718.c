// fichero 718 -- macros y constantes
#define LIMITE_718 818
#define FACTOR_718 4

int aplicar_limite718(int valor) {
    if (valor > LIMITE_718) return LIMITE_718;
    return valor * FACTOR_718;
}
