// fichero 18838 -- macros y constantes -- MODIFICADO
#define LIMITE_18838 19038
#define FACTOR_18838 5

int aplicar_limite18838(int valor) {
    if (valor > LIMITE_18838) return LIMITE_18838;
    return valor * FACTOR_18838;
}
