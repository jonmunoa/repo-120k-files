// fichero 17366 -- macros y constantes -- MODIFICADO
#define LIMITE_17366 17566
#define FACTOR_17366 3

int aplicar_limite17366(int valor) {
    if (valor > LIMITE_17366) return LIMITE_17366;
    return valor * FACTOR_17366;
}
