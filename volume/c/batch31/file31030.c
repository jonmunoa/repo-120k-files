// fichero 31030 -- macros y constantes -- MODIFICADO
#define LIMITE_31030 31230
#define FACTOR_31030 2

int aplicar_limite31030(int valor) {
    if (valor > LIMITE_31030) return LIMITE_31030;
    return valor * FACTOR_31030;
}
