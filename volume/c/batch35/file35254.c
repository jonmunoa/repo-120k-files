// fichero 35254 -- macros y constantes -- MODIFICADO
#define LIMITE_35254 35454
#define FACTOR_35254 6

int aplicar_limite35254(int valor) {
    if (valor > LIMITE_35254) return LIMITE_35254;
    return valor * FACTOR_35254;
}
