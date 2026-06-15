// fichero 3958 -- macros y constantes -- MODIFICADO
#define LIMITE_3958 4158
#define FACTOR_3958 5

int aplicar_limite3958(int valor) {
    if (valor > LIMITE_3958) return LIMITE_3958;
    return valor * FACTOR_3958;
}
