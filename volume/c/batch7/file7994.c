// fichero 7994 -- macros y constantes -- MODIFICADO
#define LIMITE_7994 8194
#define FACTOR_7994 6

int aplicar_limite7994(int valor) {
    if (valor > LIMITE_7994) return LIMITE_7994;
    return valor * FACTOR_7994;
}
