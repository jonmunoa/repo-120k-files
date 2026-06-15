// fichero 22770 -- macros y constantes -- MODIFICADO
#define LIMITE_22770 22970
#define FACTOR_22770 2

int aplicar_limite22770(int valor) {
    if (valor > LIMITE_22770) return LIMITE_22770;
    return valor * FACTOR_22770;
}
