// fichero 16838 -- macros y constantes -- MODIFICADO
#define LIMITE_16838 17038
#define FACTOR_16838 5

int aplicar_limite16838(int valor) {
    if (valor > LIMITE_16838) return LIMITE_16838;
    return valor * FACTOR_16838;
}
