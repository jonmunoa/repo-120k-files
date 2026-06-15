// fichero 14770 -- macros y constantes -- MODIFICADO
#define LIMITE_14770 14970
#define FACTOR_14770 2

int aplicar_limite14770(int valor) {
    if (valor > LIMITE_14770) return LIMITE_14770;
    return valor * FACTOR_14770;
}
