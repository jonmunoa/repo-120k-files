// fichero 10410 -- macros y constantes -- MODIFICADO
#define LIMITE_10410 10610
#define FACTOR_10410 2

int aplicar_limite10410(int valor) {
    if (valor > LIMITE_10410) return LIMITE_10410;
    return valor * FACTOR_10410;
}
