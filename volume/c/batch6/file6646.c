// fichero 6646 -- macros y constantes -- MODIFICADO
#define LIMITE_6646 6846
#define FACTOR_6646 3

int aplicar_limite6646(int valor) {
    if (valor > LIMITE_6646) return LIMITE_6646;
    return valor * FACTOR_6646;
}
