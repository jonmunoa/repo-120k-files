// fichero 49014 -- macros y constantes -- MODIFICADO
#define LIMITE_49014 49214
#define FACTOR_49014 6

int aplicar_limite49014(int valor) {
    if (valor > LIMITE_49014) return LIMITE_49014;
    return valor * FACTOR_49014;
}
