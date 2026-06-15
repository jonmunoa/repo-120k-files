// fichero 7958 -- macros y constantes -- MODIFICADO
#define LIMITE_7958 8158
#define FACTOR_7958 5

int aplicar_limite7958(int valor) {
    if (valor > LIMITE_7958) return LIMITE_7958;
    return valor * FACTOR_7958;
}
