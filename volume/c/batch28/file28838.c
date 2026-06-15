// fichero 28838 -- macros y constantes -- MODIFICADO
#define LIMITE_28838 29038
#define FACTOR_28838 5

int aplicar_limite28838(int valor) {
    if (valor > LIMITE_28838) return LIMITE_28838;
    return valor * FACTOR_28838;
}
