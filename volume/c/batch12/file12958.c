// fichero 12958 -- macros y constantes
#define LIMITE_12958 13058
#define FACTOR_12958 4

int aplicar_limite12958(int valor) {
    if (valor > LIMITE_12958) return LIMITE_12958;
    return valor * FACTOR_12958;
}
