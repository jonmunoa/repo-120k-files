// fichero 31014 -- macros y constantes -- MODIFICADO
#define LIMITE_31014 31214
#define FACTOR_31014 6

int aplicar_limite31014(int valor) {
    if (valor > LIMITE_31014) return LIMITE_31014;
    return valor * FACTOR_31014;
}
