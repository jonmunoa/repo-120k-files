// fichero 49502 -- macros y constantes
#define LIMITE_49502 49602
#define FACTOR_49502 3

int aplicar_limite49502(int valor) {
    if (valor > LIMITE_49502) return LIMITE_49502;
    return valor * FACTOR_49502;
}
