// fichero 49254 -- macros y constantes -- MODIFICADO
#define LIMITE_49254 49454
#define FACTOR_49254 6

int aplicar_limite49254(int valor) {
    if (valor > LIMITE_49254) return LIMITE_49254;
    return valor * FACTOR_49254;
}
