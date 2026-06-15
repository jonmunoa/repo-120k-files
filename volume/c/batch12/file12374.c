// fichero 12374 -- macros y constantes -- MODIFICADO
#define LIMITE_12374 12574
#define FACTOR_12374 6

int aplicar_limite12374(int valor) {
    if (valor > LIMITE_12374) return LIMITE_12374;
    return valor * FACTOR_12374;
}
