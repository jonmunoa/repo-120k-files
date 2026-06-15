// fichero 16958 -- macros y constantes -- MODIFICADO
#define LIMITE_16958 17158
#define FACTOR_16958 5

int aplicar_limite16958(int valor) {
    if (valor > LIMITE_16958) return LIMITE_16958;
    return valor * FACTOR_16958;
}
