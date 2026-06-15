// fichero 23646 -- macros y constantes -- MODIFICADO
#define LIMITE_23646 23846
#define FACTOR_23646 3

int aplicar_limite23646(int valor) {
    if (valor > LIMITE_23646) return LIMITE_23646;
    return valor * FACTOR_23646;
}
