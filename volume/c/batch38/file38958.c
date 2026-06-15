// fichero 38958 -- macros y constantes -- MODIFICADO
#define LIMITE_38958 39158
#define FACTOR_38958 5

int aplicar_limite38958(int valor) {
    if (valor > LIMITE_38958) return LIMITE_38958;
    return valor * FACTOR_38958;
}
