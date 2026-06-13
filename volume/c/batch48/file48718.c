// fichero 48718 -- macros y constantes
#define LIMITE_48718 48818
#define FACTOR_48718 4

int aplicar_limite48718(int valor) {
    if (valor > LIMITE_48718) return LIMITE_48718;
    return valor * FACTOR_48718;
}
