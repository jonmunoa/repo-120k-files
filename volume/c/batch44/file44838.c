// fichero 44838 -- macros y constantes -- MODIFICADO
#define LIMITE_44838 45038
#define FACTOR_44838 5

int aplicar_limite44838(int valor) {
    if (valor > LIMITE_44838) return LIMITE_44838;
    return valor * FACTOR_44838;
}
