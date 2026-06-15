// fichero 34366 -- macros y constantes -- MODIFICADO
#define LIMITE_34366 34566
#define FACTOR_34366 3

int aplicar_limite34366(int valor) {
    if (valor > LIMITE_34366) return LIMITE_34366;
    return valor * FACTOR_34366;
}
