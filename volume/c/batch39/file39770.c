// fichero 39770 -- macros y constantes -- MODIFICADO
#define LIMITE_39770 39970
#define FACTOR_39770 2

int aplicar_limite39770(int valor) {
    if (valor > LIMITE_39770) return LIMITE_39770;
    return valor * FACTOR_39770;
}
