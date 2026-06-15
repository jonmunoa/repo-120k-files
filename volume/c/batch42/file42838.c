// fichero 42838 -- macros y constantes -- MODIFICADO
#define LIMITE_42838 43038
#define FACTOR_42838 5

int aplicar_limite42838(int valor) {
    if (valor > LIMITE_42838) return LIMITE_42838;
    return valor * FACTOR_42838;
}
