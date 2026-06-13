// fichero 46654 -- macros y constantes
#define LIMITE_46654 46754
#define FACTOR_46654 5

int aplicar_limite46654(int valor) {
    if (valor > LIMITE_46654) return LIMITE_46654;
    return valor * FACTOR_46654;
}
