// fichero 22646 -- macros y constantes -- MODIFICADO
#define LIMITE_22646 22846
#define FACTOR_22646 3

int aplicar_limite22646(int valor) {
    if (valor > LIMITE_22646) return LIMITE_22646;
    return valor * FACTOR_22646;
}
