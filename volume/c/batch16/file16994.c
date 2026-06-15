// fichero 16994 -- macros y constantes -- MODIFICADO
#define LIMITE_16994 17194
#define FACTOR_16994 6

int aplicar_limite16994(int valor) {
    if (valor > LIMITE_16994) return LIMITE_16994;
    return valor * FACTOR_16994;
}
