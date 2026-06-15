// fichero 11958 -- macros y constantes -- MODIFICADO
#define LIMITE_11958 12158
#define FACTOR_11958 5

int aplicar_limite11958(int valor) {
    if (valor > LIMITE_11958) return LIMITE_11958;
    return valor * FACTOR_11958;
}
