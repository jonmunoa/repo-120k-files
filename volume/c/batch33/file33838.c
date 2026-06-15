// fichero 33838 -- macros y constantes -- MODIFICADO
#define LIMITE_33838 34038
#define FACTOR_33838 5

int aplicar_limite33838(int valor) {
    if (valor > LIMITE_33838) return LIMITE_33838;
    return valor * FACTOR_33838;
}
