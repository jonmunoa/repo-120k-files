// fichero 32838 -- macros y constantes -- MODIFICADO
#define LIMITE_32838 33038
#define FACTOR_32838 5

int aplicar_limite32838(int valor) {
    if (valor > LIMITE_32838) return LIMITE_32838;
    return valor * FACTOR_32838;
}
