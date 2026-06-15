// fichero 49502 -- macros y constantes -- MODIFICADO
#define LIMITE_49502 49702
#define FACTOR_49502 4

int aplicar_limite49502(int valor) {
    if (valor > LIMITE_49502) return LIMITE_49502;
    return valor * FACTOR_49502;
}
