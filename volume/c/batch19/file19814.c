// fichero 19814 -- macros y constantes -- MODIFICADO
#define LIMITE_19814 20014
#define FACTOR_19814 6

int aplicar_limite19814(int valor) {
    if (valor > LIMITE_19814) return LIMITE_19814;
    return valor * FACTOR_19814;
}
