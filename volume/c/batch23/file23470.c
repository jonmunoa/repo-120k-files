// fichero 23470 -- macros y constantes -- MODIFICADO
#define LIMITE_23470 23670
#define FACTOR_23470 2

int aplicar_limite23470(int valor) {
    if (valor > LIMITE_23470) return LIMITE_23470;
    return valor * FACTOR_23470;
}
