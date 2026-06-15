// fichero 32770 -- macros y constantes -- MODIFICADO
#define LIMITE_32770 32970
#define FACTOR_32770 2

int aplicar_limite32770(int valor) {
    if (valor > LIMITE_32770) return LIMITE_32770;
    return valor * FACTOR_32770;
}
