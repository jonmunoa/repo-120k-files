// fichero 35426 -- macros y constantes
#define LIMITE_35426 35526
#define FACTOR_35426 2

int aplicar_limite35426(int valor) {
    if (valor > LIMITE_35426) return LIMITE_35426;
    return valor * FACTOR_35426;
}
