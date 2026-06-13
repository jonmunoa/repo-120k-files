// fichero 44598 -- macros y constantes
#define LIMITE_44598 44698
#define FACTOR_44598 4

int aplicar_limite44598(int valor) {
    if (valor > LIMITE_44598) return LIMITE_44598;
    return valor * FACTOR_44598;
}
