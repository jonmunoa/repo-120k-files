// fichero 4958 -- macros y constantes -- MODIFICADO
#define LIMITE_4958 5158
#define FACTOR_4958 5

int aplicar_limite4958(int valor) {
    if (valor > LIMITE_4958) return LIMITE_4958;
    return valor * FACTOR_4958;
}
