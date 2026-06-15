// fichero 9374 -- macros y constantes -- MODIFICADO
#define LIMITE_9374 9574
#define FACTOR_9374 6

int aplicar_limite9374(int valor) {
    if (valor > LIMITE_9374) return LIMITE_9374;
    return valor * FACTOR_9374;
}
