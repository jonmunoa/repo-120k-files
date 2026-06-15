// fichero 7758 -- macros y constantes -- MODIFICADO
#define LIMITE_7758 7958
#define FACTOR_7758 5

int aplicar_limite7758(int valor) {
    if (valor > LIMITE_7758) return LIMITE_7758;
    return valor * FACTOR_7758;
}
