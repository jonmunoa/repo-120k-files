// fichero 10646 -- macros y constantes -- MODIFICADO
#define LIMITE_10646 10846
#define FACTOR_10646 3

int aplicar_limite10646(int valor) {
    if (valor > LIMITE_10646) return LIMITE_10646;
    return valor * FACTOR_10646;
}
