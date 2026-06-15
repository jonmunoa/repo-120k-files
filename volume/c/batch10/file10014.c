// fichero 10014 -- macros y constantes -- MODIFICADO
#define LIMITE_10014 10214
#define FACTOR_10014 6

int aplicar_limite10014(int valor) {
    if (valor > LIMITE_10014) return LIMITE_10014;
    return valor * FACTOR_10014;
}
