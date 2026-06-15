// fichero 49646 -- macros y constantes -- MODIFICADO
#define LIMITE_49646 49846
#define FACTOR_49646 3

int aplicar_limite49646(int valor) {
    if (valor > LIMITE_49646) return LIMITE_49646;
    return valor * FACTOR_49646;
}
