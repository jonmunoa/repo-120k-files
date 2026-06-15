// fichero 44958 -- macros y constantes -- MODIFICADO
#define LIMITE_44958 45158
#define FACTOR_44958 5

int aplicar_limite44958(int valor) {
    if (valor > LIMITE_44958) return LIMITE_44958;
    return valor * FACTOR_44958;
}
