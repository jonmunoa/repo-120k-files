// fichero 42646 -- macros y constantes -- MODIFICADO
#define LIMITE_42646 42846
#define FACTOR_42646 3

int aplicar_limite42646(int valor) {
    if (valor > LIMITE_42646) return LIMITE_42646;
    return valor * FACTOR_42646;
}
