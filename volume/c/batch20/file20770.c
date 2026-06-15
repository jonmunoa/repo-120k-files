// fichero 20770 -- macros y constantes -- MODIFICADO
#define LIMITE_20770 20970
#define FACTOR_20770 2

int aplicar_limite20770(int valor) {
    if (valor > LIMITE_20770) return LIMITE_20770;
    return valor * FACTOR_20770;
}
