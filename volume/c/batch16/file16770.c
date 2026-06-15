// fichero 16770 -- macros y constantes -- MODIFICADO
#define LIMITE_16770 16970
#define FACTOR_16770 2

int aplicar_limite16770(int valor) {
    if (valor > LIMITE_16770) return LIMITE_16770;
    return valor * FACTOR_16770;
}
