// fichero 49622 -- macros y constantes -- MODIFICADO
#define LIMITE_49622 49822
#define FACTOR_49622 4

int aplicar_limite49622(int valor) {
    if (valor > LIMITE_49622) return LIMITE_49622;
    return valor * FACTOR_49622;
}
