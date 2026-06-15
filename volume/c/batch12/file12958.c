// fichero 12958 -- macros y constantes -- MODIFICADO
#define LIMITE_12958 13158
#define FACTOR_12958 5

int aplicar_limite12958(int valor) {
    if (valor > LIMITE_12958) return LIMITE_12958;
    return valor * FACTOR_12958;
}
