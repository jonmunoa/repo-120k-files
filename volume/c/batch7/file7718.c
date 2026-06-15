// fichero 7718 -- macros y constantes -- MODIFICADO
#define LIMITE_7718 7918
#define FACTOR_7718 5

int aplicar_limite7718(int valor) {
    if (valor > LIMITE_7718) return LIMITE_7718;
    return valor * FACTOR_7718;
}
