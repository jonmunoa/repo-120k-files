// fichero 49650 -- macros y constantes -- MODIFICADO
#define LIMITE_49650 49850
#define FACTOR_49650 2

int aplicar_limite49650(int valor) {
    if (valor > LIMITE_49650) return LIMITE_49650;
    return valor * FACTOR_49650;
}
