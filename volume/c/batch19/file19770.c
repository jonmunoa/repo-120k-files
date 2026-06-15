// fichero 19770 -- macros y constantes -- MODIFICADO
#define LIMITE_19770 19970
#define FACTOR_19770 2

int aplicar_limite19770(int valor) {
    if (valor > LIMITE_19770) return LIMITE_19770;
    return valor * FACTOR_19770;
}
