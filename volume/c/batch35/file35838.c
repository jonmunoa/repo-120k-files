// fichero 35838 -- macros y constantes -- MODIFICADO
#define LIMITE_35838 36038
#define FACTOR_35838 5

int aplicar_limite35838(int valor) {
    if (valor > LIMITE_35838) return LIMITE_35838;
    return valor * FACTOR_35838;
}
