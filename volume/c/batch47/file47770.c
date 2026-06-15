// fichero 47770 -- macros y constantes -- MODIFICADO
#define LIMITE_47770 47970
#define FACTOR_47770 2

int aplicar_limite47770(int valor) {
    if (valor > LIMITE_47770) return LIMITE_47770;
    return valor * FACTOR_47770;
}
