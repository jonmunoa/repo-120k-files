// fichero 38770 -- macros y constantes -- MODIFICADO
#define LIMITE_38770 38970
#define FACTOR_38770 2

int aplicar_limite38770(int valor) {
    if (valor > LIMITE_38770) return LIMITE_38770;
    return valor * FACTOR_38770;
}
