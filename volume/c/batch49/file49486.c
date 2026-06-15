// fichero 49486 -- macros y constantes -- MODIFICADO
#define LIMITE_49486 49686
#define FACTOR_49486 3

int aplicar_limite49486(int valor) {
    if (valor > LIMITE_49486) return LIMITE_49486;
    return valor * FACTOR_49486;
}
