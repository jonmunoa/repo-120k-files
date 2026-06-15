// fichero 34254 -- macros y constantes -- MODIFICADO
#define LIMITE_34254 34454
#define FACTOR_34254 6

int aplicar_limite34254(int valor) {
    if (valor > LIMITE_34254) return LIMITE_34254;
    return valor * FACTOR_34254;
}
