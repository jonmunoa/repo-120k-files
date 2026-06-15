// fichero 44770 -- macros y constantes -- MODIFICADO
#define LIMITE_44770 44970
#define FACTOR_44770 2

int aplicar_limite44770(int valor) {
    if (valor > LIMITE_44770) return LIMITE_44770;
    return valor * FACTOR_44770;
}
